class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int x:nums){
            freq[x]+=1;
        }
        int sum=0;
        for(int x:nums){
            if(freq[x]==1){
                sum+=x;
            }
        }
        return sum;
    }
};