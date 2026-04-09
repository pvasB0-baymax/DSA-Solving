class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int m=0,su=0;
        for(int i:nums){
            su+=i;
            m=min(su,m);
        }
        return (-1)*m+1;
    }
};