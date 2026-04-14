class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> ct;
        set<int> p;
        vector<int> res;
        int f=0;
        for(int i=0;i<nums.size();i++){
            ct[nums[i]]++;
            if(ct[nums[i]]>nums.size()/3){
                p.insert(nums[i]);
            }
        }
        for(int k:p){
            res.push_back(k);
        }
        return res;
    }
};