class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sums;
        int temp = 0;
        for (int i = 0; i < nums.size(); i++) {

            for (int j = 0; j <= i; j++) {
                temp = temp + nums[j];
            }
            sums.push_back(temp);
            temp = 0;
        }
        return sums;
    }
};