class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mp,mp2;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()){
                if(t[i]!=mp[s[i]]) return false;
            }
            else{
                mp[s[i]]=t[i];
            }
        }
        for(int i=0;i<t.size();i++){
            if(mp2.find(t[i])!=mp2.end()){
                if(s[i]!=mp2[t[i]]) return false;
            }
            else{
                mp2[t[i]]=s[i];
            }
        }
        return true;
    }
};