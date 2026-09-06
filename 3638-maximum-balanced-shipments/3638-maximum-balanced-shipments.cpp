class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        int i=0,ct=0,m=weight[0];
        for(int i=1;i<weight.size();i++){
            if(weight[i]<m){
                ct++;
                if(i!=weight.size()-1) m=weight[i+1];
            }else{
                m=weight[i];
            }
        }
        return ct;
    }
};