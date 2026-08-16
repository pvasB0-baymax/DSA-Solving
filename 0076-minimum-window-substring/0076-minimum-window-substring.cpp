class Solution {
public:
        bool valid(vector<int>& a,vector<int>& b){
            for(int i=0;i<52;i++){
                if(b[i]!=0)
                    if(a[i]<b[i]) return false;
            }
            return true;
        }
    string minWindow(string s, string t) {
        
        vector<int> ctA(52,0),ctB(52,0);
        for(int i:t){
            if(islower(i))
                ctB[i-'a'+26]++;
            else
                ctB[i-'A']++;
        }
        string res="";
        int i=0,j=0,m=INT_MAX,start=-1;
        while(j<s.size()){
            if(islower(s[j])){
                ctA[s[j]-'a'+26]++;
            }else{
                ctA[s[j]-'A']++;
            }
            while(valid(ctA,ctB)){
                if(j-i+1<m){
                m=j-i+1;
                //res=s.substr(i,j-i+1);
                start=i;
            }
                if(islower(s[i])){
                    ctA[s[i]-'a'+26]--;
                }else{
                    ctA[s[i]-'A']--;
                }
                i++;
            }
            j++;
        }
        if(start==-1) return "";
        return res=s.substr(start,m);
    }
};