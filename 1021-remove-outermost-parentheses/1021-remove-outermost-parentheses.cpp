class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> sti;
        int d=0;
        string res="";
        for(char c:s){
            if(c=='('){
                if(d>0){
                    res+=c;
                }
                d++;
            }else{
                d--;
                if(d>0){
                    res+=c;
                }
            }
        }
        return res;
    }
};