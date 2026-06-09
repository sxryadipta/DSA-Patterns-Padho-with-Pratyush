class Solution {
  public:
    int countDigits(int n) {
        // Code here
        int count=0;
        while(n > 0){
            int lastDigit = n % 10;
            count++;
            n= n/10;
        }
        return count;
    }
};
