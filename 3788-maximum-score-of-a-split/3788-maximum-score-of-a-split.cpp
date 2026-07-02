class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        long pre[100000],sufmin[100000];
        pre[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            pre[i]=pre[i-1]+nums[i];
        }
        int mi=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            sufmin[i]=min(mi,nums[i+1]);
            mi=min(mi,nums[i+1]);
        }
        long ma=INT_MIN;
        for(int i=0;i<nums.size()-1;i++){
            ma=max(pre[i]-sufmin[i],ma);
        }
        return ma;
    }
};