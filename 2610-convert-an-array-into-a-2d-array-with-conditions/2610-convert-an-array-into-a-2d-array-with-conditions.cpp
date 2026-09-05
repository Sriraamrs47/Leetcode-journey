class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> result;
        while(nums.size()>0){
            int i=0;
            vector<int> temp;
            while (i<nums.size()){
                int tnum = nums[i];
                if(find(temp.begin(),temp.end(),tnum)==temp.end()){
                    temp.push_back(tnum);
                    nums.erase(nums.begin()+i);
                }
                else {
                    i++;
                }
            }
            result.push_back(temp);
        }
        return result;
    }
};