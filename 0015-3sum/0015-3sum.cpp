class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> d;
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int e=-nums[j]-nums[i];
                int l=j+1,r=nums.size()-1;
                while(l<=r){
                    int mid=l+(r-l)/2;
                    if(nums[mid]==e){
                        d.insert({nums[i],nums[j],nums[mid]});
                        break;
                    }else if(nums[mid]>e){
                        r=mid-1;
                    }else{
                        l=mid+1;
                    }
                }
            }
        }
        for(auto s:d){
            res.push_back(s);
        }
        return res;
    }
};