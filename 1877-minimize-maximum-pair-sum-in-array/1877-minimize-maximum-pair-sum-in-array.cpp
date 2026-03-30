class Solution {
public:
    int minPairSum(vector<int>& nums) {
        vector<int> res;
        sort(nums.begin(),nums.end());
        for(int i=0,j=nums.size()-1;i<nums.size()/2,j>=nums.size()/2;i++,j--){
            res.push_back(nums[i]+nums[j]);
        }
        sort(res.begin(),res.end());
        return res[res.size()-1];
    }
};