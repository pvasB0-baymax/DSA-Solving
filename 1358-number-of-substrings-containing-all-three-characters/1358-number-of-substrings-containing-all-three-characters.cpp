class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<int,int> a;
        int i=0,j=0,ct=0;
        while(j<s.size()){
            a[s[j]-'a']++;
            //if(a.size()==3) ct++;
            while(a.size()==3){
                ct+=s.size()-j;
                a[s[i]-'a']--;
                if(a[s[i]-'a']==0) a.erase((s[i]-'a'));
                i++;
                //if(a.size()==3) ct++;
            }
            j++;
        }
        return ct;
    }
};