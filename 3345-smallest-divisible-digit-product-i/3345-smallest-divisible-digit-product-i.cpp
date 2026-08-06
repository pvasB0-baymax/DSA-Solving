class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;i<=100;i++){
            int k=i,prod=1;;
            while(k>0){
                int rem=k%10;
                prod*=rem;
                k/=10;
            }
            if(prod%t==0){
                return i;
            }
        }
        return 1;
    }
};