class Solution {
public:
    string longestPalindrome(string s) {
        int a=0,b=0,p1,p2;
        for(int i=0;i<s.size();i++){
            p1=i-1,p2=i+1;
            while(p1>=0 && p2<s.size()){
                if(s[p1]==s[p2]){
                    p1--;
                    p2++;
                }
                else{
                    break;
                }
            }
            if(p2-p1-1>b-a){
                a=p1+1;
                b=p2-1;
            }
        
        p1=i,p2=i+1;
            while(p1>=0 && p2<s.size()){
                if(s[p1]==s[p2]){
                    p1--;
                    p2++;
                }
                else{
                    break;
                }
            }
            if(p2-p1-1>b-a){
                a=p1+1;
                b=p2-1;
            }
        }
        cout<<p1<<p2;
            string res="";
            for(int i=a;i<=b;i++){
                res+=s[i];
            }
            return res;
    }
};