class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> creq;
        int ct=0;
        for(int i=nums.size()-1;i>=0;i--){
            creq[nums[i]]++;
            if(creq[nums[i]]>1){
                return i/3+1;
            }
        }
        
        return ct;
    }
};