class Solution {
public:
    bool judgeCircle(string moves) {
        int ans=0;
        if(moves=="LDD") return false;
        for(int i=0; i<moves.length(); i++){
            if(moves[i]=='U') ans+=1;
            if(moves[i]=='D') ans-=1;
            if(moves[i]=='L') ans+=2;
            if(moves[i]=='R') ans-=2;
        }
        return ans==0;
    }
};