class Solution {
public:
    bool check(vector<int>& nums) {
        int i;
        for(i=0;i<nums.size()-1;i++){
            if(nums[i+1]<nums[i]){
                break;
            }
        }
        if(i==nums.size()-1) return true;
        int n=nums.size();
        for(int k=0;k<n;k++){
            nums.push_back(nums[k]);
        }
        for(int j=i+1;j<i+n;j++){
            if(nums[j+1]<nums[j]) return false;
        }
        return true;
    }
};