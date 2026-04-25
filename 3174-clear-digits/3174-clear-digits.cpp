class Solution {
public:
    string clearDigits(string s) {
        stack<int> st;
        string res="";
        for(char c:s){
            if(isdigit(c)){
                if(!st.empty()){
                    if(!isdigit(st.top())){
                        st.pop();
                    }
                }
            }else{
                st.push(c);
            }
        }
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};