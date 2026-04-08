class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top=0,bottom=matrix.size()-1,left=0,right=matrix[0].size()-1;
        vector<int> res;
        int i;
        while(left<=right && top<=bottom){
            cout<<left<<" "<<right<<" "<<top<<" "<<bottom<<endl;
            
        for(int i=left;i<=right;i++){
            res.push_back(matrix[top][i]);
        }
        top++;
        if(left<=right && top<=bottom){
        for(int i=top;i<=bottom;i++){
            res.push_back(matrix[i][right]);
        }
        }
        right--;
        if(left<=right && top<=bottom){
        for(int i=right;i>=left;i--){
            res.push_back(matrix[bottom][i]);
        }
        }
        bottom--;
        if(left<=right && top<=bottom){
        for(int i=bottom;i>=top;i--){
            res.push_back(matrix[i][left]);
        }
        }
        left++;
        }
        cout<<left<<" "<<right<<" "<<top<<" "<<bottom;
        return res;
    }
};