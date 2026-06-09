// Problem  : Palindrome
// GeeksforGeeks : https://www.geeksforgeeks.org/problems/palindrome0746/1
// Pattern  : Basic Maths
// TC       : O(log₁₀n)
// SC       : O(1)
class Solution {
public:
    bool isPalindrome(int n) {
        int original = n;

        n = abs(n);

        int reversed = 0;

        while (n > 0) {
            int lastDigit = n % 10;
            reversed = reversed * 10 + lastDigit;
            n /= 10;
        }

        return reversed == abs(original);
    }
};
