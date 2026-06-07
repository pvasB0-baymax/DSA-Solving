class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        int ct=0;
        sort(nums.begin(),nums.end());
        while(i<j){
            if(nums[i]+nums[j]>=target) j--;
            else{
                ct+=j-i;
                i+=1;
            }
        }
        return ct;
    }
};