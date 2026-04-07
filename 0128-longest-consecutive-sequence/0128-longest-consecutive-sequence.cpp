class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(int i:nums){
            st.insert(i);
        }
        int m=0,ct=0;
        for(int i:st){
            //ct=1;
            if(st.find(i-1)==st.end()){
                ct=1;
                while(st.find(i+1)!=st.end()){
                    ct++;
                    i++;
                }
                m=max(m,ct);
            }
        }
        return m; 
    }
};