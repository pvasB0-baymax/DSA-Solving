class Solution {
public:
    string smallestSubsequence(string s) {
        map<char,int> m;
        for(int i=0;i<s.size();i++){
            m[s[i]]=i;
        }
        stack<char> st;
        vector<int> visited(26,0);
        for(int i=0;i<s.size();i++){
            if(!visited[s[i]-'a']){
                if(st.empty()){
                     st.push(s[i]);
                     visited[s[i]-'a']=1;
                }
                else{
                    while(!st.empty() && ((st.top()-'a')>(s[i]-'a')) && (m[st.top()]>i)){
                        visited[st.top()-'a']=0;
                        st.pop();
                    }
                    st.push(s[i]);
                    visited[s[i]-'a']=1;
                }
            }
        }
        string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};