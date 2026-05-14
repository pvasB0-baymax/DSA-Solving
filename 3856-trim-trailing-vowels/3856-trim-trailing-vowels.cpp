class Solution {
public:
    string trimTrailingVowels(string s) {
        string res="";
        int i=s.size()-1;
        while(i>=0){
            if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'){
                break;
            }
            i--;
        }
        for(int j=0;j<=i;j++){
            res+=s[j];
        }
        return res;
    }
};