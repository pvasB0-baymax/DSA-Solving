class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int f=0,x=0;
        for(int i:nums){
            x=x^i;
            if(i!=0) f=1;
        }
        if(f==0) return 0;
        else if(x>0) return nums.size();
        else return nums.size()-1;
    }
};