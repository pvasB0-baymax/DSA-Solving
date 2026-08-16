class Solution {
public:
    int atMost(vector<int>& a, int k){
        if(k==0) return 0;
        unordered_map<int,int> ct;
        int j=0,res=0;
        for(int i=0;i<a.size();i++){
            ct[a[i]]++;
            while(ct.size()>k){
                ct[a[j]]--;
                if(ct[a[j]]==0){
                    ct.erase(a[j]);
                }
                j++;
            }
            res+=i-j+1;
        }
        return res;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums,k)-atMost(nums,k-1);
    }
};