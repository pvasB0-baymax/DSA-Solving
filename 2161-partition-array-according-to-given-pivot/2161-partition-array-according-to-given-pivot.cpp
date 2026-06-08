class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> lt,rt,mid;
        for(int i:nums){
            if(i<pivot){
                lt.push_back(i);
            }
            else if(i==pivot){
                mid.push_back(i);
            }
            else
                rt.push_back(i);
        }
        vector<int> res;
        for(int i:lt) res.push_back(i);
        for(int i:mid) res.push_back(i);
        for(int i:rt) res.push_back(i);
        return res;
    }
};