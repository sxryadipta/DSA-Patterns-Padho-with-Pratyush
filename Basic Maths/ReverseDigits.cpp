// Problem  : Reverse Digits
// GeeksforGeeks : https://www.geeksforgeeks.org/problems/reverse-digit0316/1
// Pattern  : Basic Maths
// TC       : O(log₁₀n)
// SC       : O(1)
class Solution {
public:
    int reverseDigits(int n) {
        int number = 0;

        while (n > 0) {
            int lastDigit = n % 10;
            number = number * 10 + lastDigit;
            n /= 10;
        }

        return number;
    }
};
