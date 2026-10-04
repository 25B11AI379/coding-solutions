class Solution {
public:
    int dist(int a,int b){
        int d=abs(a-b);
        return min(d,10-d);
    }
    int minRotations(int n, string s) {
        int t=dist(0,s[0]-'0');
        for(int i=1;i<n;i++){
            t+=dist(s[i-1]-'0',s[i]-'0');
        }
        int ans=t;
        for(int k=0;k<n;k++){
            int curr=t;
            if(k==0){
                curr-=dist(0,s[0]-'0');
                curr+=dist(0,s[n-1]-'0');
            }
            else{
                curr-=dist(s[k-1]-'0',s[k]-'0');
                curr+=dist(s[k-1]-'0',s[n-1]-'0');
            }
            ans=min(ans,curr);
        }
        return ans;
    }
};