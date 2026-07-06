class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        long m=0;
        int j=nums[0];
        for(int i=k;i<nums.size();i++){
            j=max(j,nums[i-k]);
            m=max(m,(long)nums[i]+j);
        }
        return m;
    }
};