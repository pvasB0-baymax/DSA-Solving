class Solution {
public:
    bool isPalindromic(string s) {
        string r="";
        for(auto c:s){
            bitset<8> b2((int)c);
            r+=b2.to_string();
        }
        int i=0,j=r.size()-1;
            while(i<=j){
                if(r[i]!=r[j]) return false;
                i++;
                j--;
            }
            return true;
        
    }
};