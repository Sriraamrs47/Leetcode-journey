class Solution {
public:
    int minOperations(vector<int>& nums) {
        int result = 0;
        if (nums.size()<= 0){
            return 0;
        }
        for (int i=1;i<nums.size();i++){
            if (nums[i]<=nums[i-1]){
               int target = nums[i-1]+1;
               result+=target-nums[i];
               nums[i]=target;
            }
          
        }
        return result;
    }
};