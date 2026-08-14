class Solution {
public:
    int maximumLengthSubstring(string s) {
        vector<int> a(26,0);
        int i=0,j=0,ans=0;
        while(j<s.size()){
            a[s[j]-'a']++;
            while(a[s[j]-'a']>2){
                a[s[i]-'a']--;
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};