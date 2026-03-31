class Solution {
public:
    int bitwiseComplement(int n) {
       int m=n,c=0;
       if(n==0){
        return 1;
       }
       while(m>0){
        m=m>>1;
        c++;
       }
       for(int i=0;i<c;i++){
        n=n^(1<<i);
       }
       return n;
    }  
};