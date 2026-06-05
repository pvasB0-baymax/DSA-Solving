class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> anamap(strs.size());
        vector<vector<string>> r;
        for(int i=0;i<strs.size();i++){
            anamap[i]=strs[i];
            sort(anamap[i].begin(),anamap[i].end());
        }
        unordered_map<string,vector<string>> mp;
        for(int i=0;i<strs.size();i++){
            mp[anamap[i]].push_back(strs[i]);
        }
        for(auto m:mp){
            r.push_back(m.second);
        }
        return r;
    }
};