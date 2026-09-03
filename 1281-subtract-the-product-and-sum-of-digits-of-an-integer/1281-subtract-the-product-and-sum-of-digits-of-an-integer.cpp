class Solution {
public:
    int subtractProductAndSum(int n) {
        int diff;
        int product = 1;
        int sum = 0;
        while (n>0){
           int temp = n%10;
            sum = sum + temp;
            product = product*temp;
            n = n-temp;
            n = n/10;

        }
        diff = product - sum;
        return diff;
    }

};