class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        for (int i=0;i<nums1.size();i++){
            int temp = nums1[i];
            for (int j=0;j<nums2.size();j++){
               if (temp == nums2[j]){
                if (find(result.begin(),result.end(),temp)==result.end()){
                   result.push_back(temp);
                }
                }
            }
        }
        return result;
    }
};