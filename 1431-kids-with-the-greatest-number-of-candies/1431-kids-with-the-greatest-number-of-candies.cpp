class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;             
        int maxc = 0;
        for(int i=0;i<candies.size();i++){
            maxc = max(maxc,candies[i]);
        }
        for (int j=0;j<candies.size();j++){
            if (maxc<=candies[j]+extraCandies){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;
    }
};