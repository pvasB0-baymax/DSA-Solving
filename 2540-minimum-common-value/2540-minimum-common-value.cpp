class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n,c;
        if(nums1.size()<=nums2.size()) {n=nums1.size();c=1;}
        else {n=nums2.size();c=2;}
        if(c==1){
            for(int i=0;i<n;i++){
                int l=0,r=nums2.size()-1,target=nums1[i];;
                while(l<=r){
                    int mid=l+(r-l)/2;
                    if(nums2[mid]==target){
                        return target;
                }else if(nums2[mid]<target){
                    l=mid+1;
                }else{
                    r=mid-1;
                }
            }
            //return -1;
            }
        }
        else{
            for(int i=0;i<n;i++){
                int l=0,r=nums1.size()-1,target=nums2[i];;
                while(l<=r){
                    int mid=l+(r-l)/2;
                    if(nums1[mid]==target){
                        return target;
                }else if(nums1[mid]<target){
                    l=mid+1;
                }else{
                    r=mid-1;
                }
            }
            //return -1;
            }
        }
        return -1;
    }
};