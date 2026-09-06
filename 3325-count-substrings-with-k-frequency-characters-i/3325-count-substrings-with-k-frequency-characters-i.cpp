class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        int ct=0;
        for(int i=0;i<s.size();i++){
            unordered_map<char,int> mp;
            for(int j=i;j<s.size();j++){
                mp[s[j]]++;
                if(mp[s[j]]>=k){
                    ct+=s.size()-j;
                    break;
                }
            }
        }
        return ct;
    }
};