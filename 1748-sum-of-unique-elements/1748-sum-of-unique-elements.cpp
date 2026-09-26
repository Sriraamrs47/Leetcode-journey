class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int result = 0;
        int temp = 1;
        for (int i = 0; i < nums.size(); i++) {
            temp = 1;
            for (int j = 0; j < nums.size(); j++) {
                if (i == j) {
                    continue;
                } else {
                    if (nums[i] == nums[j]) {
                        temp = 0;
                        continue;
                    }
                }
            }
            if (temp != 0) {
                result += nums[i];
            }
        }
        return result;
    }
};