class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        vector<int> temp;
        for(int i=0;i<nums.size()-k;i++){
            temp.push_back(nums[i]);
        }
        int j=nums.size()-k,i=0;
        for(i=0;i<k;i++){
            nums[i]=nums[j];
            j++;
        }
        j=0;
        while(i<nums.size()){
            nums[i]=temp[j];
            i++;
            j++;
        }
    }
};