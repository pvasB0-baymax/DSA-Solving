class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        set<int> s1;
        int ct=0;
        for(int i:nums){
            s1.insert(i);
        }
        for(int i=0;i<nums.size();i++){
            set<int> st;
            for(int j=i;j<nums.size();j++){
                st.insert(nums[j]);
                if(st.size()==s1.size()){
                     ct++;
                }
            }
        }
        return ct;
    }
};