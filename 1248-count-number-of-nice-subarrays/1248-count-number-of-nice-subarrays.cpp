class Solution {
public:
    int atmost(vector<int> &nums,int n,int k){
        int i=0,j=0,res=0,ct=0;
        while(j<nums.size()){
            if(nums[j]%2!=0) ct++;
            //if(ct==k) res++;
            while(ct>k){
                if(nums[i]%2!=0) ct--;
                i++;
            }
            res+=(j-i+1);
            j++;
        }
        return res;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        int ct=0,res=0,i=0,j=0;
        return atmost(nums,nums.size(),k)-atmost(nums,nums.size(),k-1);
    }
};