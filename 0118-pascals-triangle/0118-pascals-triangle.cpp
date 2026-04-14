class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> tri(numRows);
        tri[0]={1};
        if(numRows>=2){
            tri[1]={1,1};
        }
        if(numRows<=2){
            return tri;
        }
        int i=2;
        while(i<numRows){
            tri[i].push_back(1);
            for(int j=1;j<i;j++){
                tri[i].push_back(tri[i-1][j-1]+tri[i-1][j]);
            }
            tri[i].push_back(1);
            i++;
        }
        return tri;
    }
};