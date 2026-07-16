// Problem  : Sort Colors (Dutch National Flag)
// Leetcode : https://leetcode.com/problems/sort-colors/description/
// Pattern  : Two Pointers (Three Pointers)

//brute force
class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(), nums.end());
    }
};

//better
class Solution {
public:
    void sortColors(vector<int>& nums) {

        int zero = 0, one = 0, two = 0;

        for (int num : nums) {
            if (num == 0)
                zero++;
            else if (num == 1)
                one++;
            else
                two++;
        }

        int i = 0;

        while (zero--)
            nums[i++] = 0;

        while (one--)
            nums[i++] = 1;

        while (two--)
            nums[i++] = 2;
    }
};
