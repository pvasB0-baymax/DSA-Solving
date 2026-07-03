class Solution {
public:
    long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
        for(auto &m:grid){
            sort(m.begin(),m.end());
        }
        //int sum=0;
        //for(int i:limits){
        //    sum+=i;
        //}
        vector<int> a;
        //int i=0;
        for(int k=0;k<grid.size();k++){
            for(int j=(int)grid[k].size()-1;j>=(int)grid[k].size()-limits[k];j--){
                a.push_back(grid[k][j]);
            }
        }
        sort(a.begin(),a.end());
        long sum=0;
        for(int i=a.size()-1;i>=max(0,(int)a.size()-k);i--){
            sum+=a[i];
        }
        return sum;
    }
};