class Solution {
public:
    int minimumPushes(string word) {
        int N=word.size();
        vector<int>arr(26,0);
        for(int i=0;i<N;i++){
            arr[word[i]-'a']++;
        }
        int count=1,ans=0;;
        for(int i=0;i<26;i++){
            if(arr[i]>0){
                if(count<9){
                    ans++;
                }else if(count<17){
                    ans+=2;
                }else if(count<25){
                    ans+=3;
                }else if(count<27){
                    ans+=4;
                }
                count++;
            }
        }
        return ans;
    }
};