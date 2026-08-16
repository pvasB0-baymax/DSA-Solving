class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int ans=0,sum=0,tsum=0,i=0,j=0;
        for(int i:cardPoints){
            tsum+=i;
        }
        for(i=0;i<cardPoints.size()-k;i++){
            sum+=cardPoints[i];
        }
        ans=max(ans,tsum-sum);
        while(i<cardPoints.size()){
            sum+=cardPoints[i];
            sum-=cardPoints[j];
            i++;
            j++;
            ans=max(ans,tsum-sum);
        }
        return ans;
    }
};