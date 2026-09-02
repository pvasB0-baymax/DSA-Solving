class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ct=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<k){
                ct++;
            }else{
                return ct;
            }
        }
        return ct;
    }
};