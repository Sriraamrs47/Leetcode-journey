class Solution {
public:
    int minimumSum(int num) {
        vector<int> temp;
        for(int i=0;i<4;i++){
            temp.push_back(num%10);
            num = num/10;
        }
        sort(temp.begin(),temp.end());
        int result = temp[0]*10+temp[2] + temp[1]*10+temp[3];
        return result;
    }
};