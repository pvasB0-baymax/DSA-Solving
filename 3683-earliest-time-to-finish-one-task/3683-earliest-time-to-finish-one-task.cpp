class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int min=INT_MAX;
        for(auto m:tasks){
            if(m[0]+m[1]<min){
                min=m[0]+m[1];
            }
        }
        return min;
    }
};