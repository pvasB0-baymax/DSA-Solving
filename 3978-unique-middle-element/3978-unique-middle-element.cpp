class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n=nums.size()/2;
        unordered_map<int,int> ct;
        for(int i:nums){
            ct[i]++;
        }
        if(ct[nums[n]]==1) return true;
        else return false;

    }
};