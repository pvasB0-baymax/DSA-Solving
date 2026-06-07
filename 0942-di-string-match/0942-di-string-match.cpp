class Solution {
public:
    vector<int> diStringMatch(string s) {
        int k=0,j=s.size();
        int i=0;
        vector<int> res;
        while(i<=s.size()){
            if(s[i]=='I'){
                res.push_back(k);
                k++;
            }else{
                res.push_back(j);
                j--;
            }
            i++;
        }
        //res.push_back(k);
        return res;
    }
};