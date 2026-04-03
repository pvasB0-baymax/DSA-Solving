class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ct=1;
        int pt=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[++pt]=nums[i];
                ct++;
            }
        }
        return ct;
    }
};