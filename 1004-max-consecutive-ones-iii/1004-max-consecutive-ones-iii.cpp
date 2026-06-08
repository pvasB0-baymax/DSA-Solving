class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int t=k,ct=0,ans=0;
        int i=0,j=0;
        while(j<nums.size()){
            if(nums[j]==1){
                ct++;
                j++;
            }else if(t>0){
                ct++;
                t--;
                j++;
            }else{
                if(nums[i]==0){
                    t++;
                    i++;
                    ct--;
                    //j++;
                }else{
                    i++;
                    ct--;
                }
            }
            cout<<ct<<" ";
            ans=max(ans,ct);
            
        }
        return ans;
    }
};