class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        sort(nums1.begin(),nums1.end());
        int a=nums1[0];
        if(a%2==0){
            for(int i=1;i<nums1.size();i++){
                if(nums1[i]%2==1){
                    return false;
                }
            }
        }else{
            return true;
        }
        return true;
    }
};