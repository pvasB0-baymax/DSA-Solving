class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> ct;
        for(int i:nums){
            ct[i]++;
        }
        vector<pair<int,int>> v;
        for(auto m:ct){
            v.push_back({m.second,m.first});
        }
        sort(v.begin(),v.end());
        vector<int> res;
        for(int i=0;i<v.size();i++){
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }
        for(int i=v.size()-1;i>=v.size()-k && i>=0;i--){
            res.push_back(v[i].second);
        }
        
        return res;
    }
};