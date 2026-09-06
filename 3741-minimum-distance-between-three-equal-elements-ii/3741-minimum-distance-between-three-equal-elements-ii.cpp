class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,vector<int>> freq;
        long mi=INT_MAX;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]].push_back(i);
        }
        for(auto m:freq){
            vector<int> temp=m.second;
            if(temp.size()>=3){
                for(int i=0;i<temp.size()-2;i++){
                    mi=min(mi,(long)temp[i+2]-temp[i]);
                }
            }
        }
        if(mi==INT_MAX){
            return -1;
        }
        else
            return 2*mi;
    }
};