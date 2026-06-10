class Solution {
public:
    int countEven(int num) {
        int ct=0,i;
        for(i=2;i<=num;i++){
            long sum=0;
            int n=i;
            while(n>0){
                sum+=n%10;
                n=n/10;
            }
            //cout<<sum<<" ";
            if(sum%2==0){
                ct++;
            }
        }
        return ct;
    }
};