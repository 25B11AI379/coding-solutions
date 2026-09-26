class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            long long sum=0;
            unordered_set<int>s;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                if(sum%k==0){
                    ans=max(ans,j-i+1);
                }
                int r=(2LL*nums[j])%k;
                if(r<0){
                    r+=k;}
                s.insert(r);
                int sr=sum%k;
                if(sr<0){
                        sr+=k;}
                if(s.count(sr)){
                        ans=max(ans,j-i+1);
                    }
                    }
                }
                return ans;
            
        
    }
};