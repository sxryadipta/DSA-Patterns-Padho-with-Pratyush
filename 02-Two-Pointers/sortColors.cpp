// Problem  : Sort Colors
// LeetCode : https://leetcode.com/problems/sort-colors/
// Pattern  : Two Pointers (Dutch National Flag)
// Optimal TC: O(n)
// Optimal SC: O(1)

#include <algorithm>
#include <vector>

using namespace std;

// Approach 1: Comparison sorting
// TC: O(n log n)
// SC: O(log n), depending on the sorting implementation
class SortingSolution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(), nums.end());
    }
};

// Approach 2: Count and overwrite
// TC: O(n)
// SC: O(1)
class CountingSolution {
public:
    void sortColors(vector<int>& nums) {
        int counts[3] = {0, 0, 0};

        for (int color : nums) {
            counts[color]++;
        }

        int index = 0;
        for (int color = 0; color < 3; color++) {
            for (int frequency = 0; frequency < counts[color]; frequency++) {
                nums[index++] = color;
            }
        }
    }
};

// Approach 3: Dutch National Flag (one pass)
// TC: O(n)
// SC: O(1)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = static_cast<int>(nums.size()) - 1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } else if (nums[mid] == 1) {
                mid++;
            } else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
