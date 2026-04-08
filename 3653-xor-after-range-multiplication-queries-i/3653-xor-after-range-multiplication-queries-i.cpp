class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        long m=1e9+7,res=0;
        for(auto &q:queries){
            int idx=q[0];
            while(idx<=q[1]){
                nums[idx]=((nums[idx]%m)*(q[3]%m))%m;
                idx+=q[2];
            }
        }
        for(int i:nums){
            res^=i;
            //cout<<i<<" "<<res<<endl;
        }
        return res;
    }
};