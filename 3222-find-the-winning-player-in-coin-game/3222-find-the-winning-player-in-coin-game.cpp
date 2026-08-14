class Solution {
public:
    string winningPlayer(int x, int y) {
        if(y<4*x){
            if((y/4)%2==1) return "Alice";
            else return "Bob";
        }else{
            if(x%2==0) return "Bob";
            else return "Alice"; 
        }
    }
};