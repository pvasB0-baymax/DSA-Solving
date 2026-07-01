class Solution {
public:
    int subtractProductAndSum(int n) {
        int t,rem,sum=0,prod=1;
        t=n;
        while(n>0){
            rem=n%10;
            sum+=rem;
            n=n/10;
        }
        while(t>0){
            rem=t%10;
            prod*=rem;
            t=t/10;
        }
        return prod-sum;
    }
};