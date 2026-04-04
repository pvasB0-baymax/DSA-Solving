class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0,o=0,t=0;
        for(int i:nums){
            if(i==0) z++;
            else if(i==1) o++;
            else t++;
        }
        int i=0;
        for(i=0;i<z;i++){
            nums[i]=0;
        }
        while(i<z+o){ nums[i]=1;i++;}
        while(i<nums.size()){ nums[i]=2;i++;}
    }
};