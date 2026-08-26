class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int i=0,j=0,ct=0,m=INT_MAX,a=-1,b=-1;
        while(j<s.size()){
            if(s[j]=='1'){
                ct++;
            }
            while(ct==k){
                
                if(j-i+1<m){
                    m=j-i+1;
                    a=i;
                    b=j;
                }
                else if(j-i+1==m){
                    if(s.substr(i,j-i+1)<s.substr(a,b-a+1)){
                        a=i;
                        b=j;
                    }
                }
                if(s[i]=='1'){
                    ct--;
                }
                i++;
            }
            j++;
        }
        string res="";
        if(a==-1){
            return res;
        }
        for(int l=a;l<=b;l++){
            res+=s[l];
        }
        return res;
    }
};