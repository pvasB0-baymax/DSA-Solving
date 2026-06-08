class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int ct=0;
        sort(nums.begin(),nums.end());
        for(int k=nums.size()-1;k>=2;k--){
            //int k=i+1,j=nums.size()-1;
            int i=0;
            int j=k-1;
            while(i<j){
                if(nums[i]+nums[j]>nums[k]){
                    ct+=(j-i);
                    j--;
                }
                else{
                    i++;
                }
            }
        }
        return ct;
    }
};