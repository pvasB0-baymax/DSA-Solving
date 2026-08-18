class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int> ct;
        for(int i:nums){
            ct[i]++;
        }
        if(k==1){
            int ans=-1;
            for(auto m:ct){
                if(m.second==1){
                    ans=max(ans,m.first);
                }
            }
            return ans;
        }
        else if(k==nums.size()){
            int ans=-1;
            for(int i:nums){
                ans=max(ans,i);
            }
            return ans;
        }
        else{
            int ans=-1;
            if(ct[nums[0]]==1){
                ans=max(ans,nums[0]);
            }
            if(ct[nums[nums.size()-1]]==1){
                ans=max(ans,nums[nums.size()-1]);
            }
            return ans;
        }
    }
};