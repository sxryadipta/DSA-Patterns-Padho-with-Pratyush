// Problem  : Reverse Integers
// Leetcode : https://leetcode.com/problems/reverse-integer/description/
// Pattern  : Basic Maths
// TC       : O(log₁₀x)
// SC       : O(1)
class Solution {
public:
    int reverse(int x) {
        int number = 0;

        while (x != 0) {
            int lastDigit = x % 10;

            if (number > INT_MAX / 10 ||
                (number == INT_MAX / 10 && lastDigit > 7))
                return 0;

            if (number < INT_MIN / 10 ||
                (number == INT_MIN / 10 && lastDigit < -8))
                return 0;

            number = number * 10 + lastDigit;
            x /= 10;
        }

        return number;
    }
};
