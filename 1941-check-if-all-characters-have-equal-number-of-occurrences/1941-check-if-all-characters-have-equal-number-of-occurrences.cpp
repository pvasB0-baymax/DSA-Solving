class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> ct;
        for(char c:s){
            ct[c]++;
        }
        int n=ct[s[0]];
        for(auto m:ct){
            if(m.second!=n){
                return false;
            }
        }
        return true;
    }
};