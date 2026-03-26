class Solution {
public:
    vector<int> constructRectangle(int area) {
        int n=sqrt(area);
        cout<<n<<endl;
        vector<int> res;
        for(int i=n;i>0;i--){
            if(area%i==0){
                res.push_back(area/i);
                res.push_back(i);
                return res;
            }
        }
        return res;
    }
};