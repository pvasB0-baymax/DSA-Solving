class Solution {
public:
    int minimumSum(int n, int k) {
        vector<int> r;
        set<int> st;
        int i=1;
        while(st.size()<n){
            if(st.count(k-i)){}
            else{
                st.insert(i);
            }
            i++;
        }
        long sum=0;
        for(int i:st){
            sum+=i;
        }
        return sum;
    }
};