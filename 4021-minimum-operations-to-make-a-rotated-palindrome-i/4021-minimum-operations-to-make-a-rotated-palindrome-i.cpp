class Solution {
public:
    int minOperations(string s) {
        int ans=INT_MAX;
        for(int k=0;k<s.size();k++){
            int ct=0;
            for(int i=0;i<s.size()/2;i++){
                ct+=min(((s[(i+k)%s.size()]-s[(s.size()-i-1+k)%s.size()]+26)%26),((s[(s.size()-i-1+k)%s.size()]-s[(i+k)%s.size()]+26)%26));
            }
            ans=min(ans,k+ct);
        }
        return ans;
    }
};