class Solution {
public:
    int characterReplacement(string s, int k) {
         int ans=0,N=s.length();
        for(char ch='A';ch<='Z';ch++){
            int bal=k,lt=0;
            for(int i=0;i<N;i++){
                if(s[i]==ch){
                    ans=max(ans,i-lt+1); continue;
                }
                while(bal==0 && lt<i){
                    if(s[lt]==ch) lt++;
                    else if(s[lt]!=ch){
                        lt++;
                        bal=min(k,1);
                        break;                        
                    }
                }
                if(bal>0){
                    ans=max(ans,i-lt+1);
                    bal--;
                }else{
                    lt++;
                    
                }
            }
        }
        return ans;
  
    }
};