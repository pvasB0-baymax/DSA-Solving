class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> res;
        sort(nums.begin(),nums.end());
        //int p1=0,p2=0;
        int l=0,r=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target) res.push_back(i);
        }
        return res;
    }
};