class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index=-1;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                index=i-1;
                break;
            }
        }
        if(index!=-1){
            int i;
            for(i=nums.size()-1;i>index;i--){
                if(nums[i]>nums[index]) break;
            }
            swap(nums[i],nums[index]);
            reverse(nums.begin()+index+1,nums.end());
        }
        else{
            sort(nums.begin(),nums.end());
        }
    }
};