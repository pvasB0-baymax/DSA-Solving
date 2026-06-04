class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int> ct;
        while(n>0){
            ct[n%10]++;
            n=n/10;

        }
        long d=0;
        for(auto m:ct){
            d+=m.first*m.second;
        }
        return d;
    }
};