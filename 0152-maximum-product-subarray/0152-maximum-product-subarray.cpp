class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int m=1,pre=1,suf=1,ans=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){ 
                ans=max(ans,0);
                pre=1;
            }
            else{
                pre*=nums[i];
                ans=max(ans,pre);
            }
            
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==0){
                ans=max(ans,0);
                suf=1;
            }
            else{
                suf*=nums[i];
                ans=max(ans,suf);
            }
           
        }
        return ans;
    }
};