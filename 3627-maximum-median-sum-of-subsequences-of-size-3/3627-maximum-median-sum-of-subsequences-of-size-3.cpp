class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        long sum=0,ct=0;
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-2;i>0;i-=2){
            sum+=nums[i];
            ct++;
            if(ct==nums.size()/3) break;
        }
        return sum;
    }
};