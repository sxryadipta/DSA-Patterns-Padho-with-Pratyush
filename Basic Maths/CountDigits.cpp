// Problem  : Count Digits in a number
// GeeksforGeeks : https://www.geeksforgeeks.org/problems/count-total-digits-in-a-number/1
// Pattern  : Basic Maths
// TC       : O(logn)
// SC       : O(1)
class Solution {
  public:
    int countDigits(int n) {
        // Code here
        int count=0;
        while(n > 0){
            count++;
            n= n/10;
        }
        return count;
    }
};
