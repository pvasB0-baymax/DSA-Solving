class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int ct=0,i;
        for(i=0;i<strs[0].size() && i<strs[strs.size()-1].size();i++){
             if(strs[0][i]!=strs[strs.size()-1][i]) break;
        }
        string res="";
        for(int j=0;j<i;j++){
            res+=strs[0][j];
        }
        return res;
    }
};