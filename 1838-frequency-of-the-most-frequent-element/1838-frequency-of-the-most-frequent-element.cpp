class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int i=0,j=0,ans=1;
        long total=0;
        sort(nums.begin(),nums.end());
        for(j=0;j<nums.size();j++){
            total+=nums[j];
            while((long)(j-i+1)*nums[j]-total>k){
                total-=nums[i];
                i++;
            }
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};