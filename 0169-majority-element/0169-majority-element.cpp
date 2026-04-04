class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> ct;
        for(int i:nums){
            ct[i]++;
            if(ct[i]>nums.size()/2) return i;
        }
        return 0;
    }
};