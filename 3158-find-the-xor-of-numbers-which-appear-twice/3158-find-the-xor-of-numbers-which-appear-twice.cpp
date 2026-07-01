class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int> ct;
        for(int i:nums){
            ct[i]++;
        }
        int x=0;
        for(auto m:ct){
            if(m.second==2){
                x=x^m.first;
            }
        }
        return x;
    }
};