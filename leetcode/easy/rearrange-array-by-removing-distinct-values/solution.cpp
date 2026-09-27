class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int,int>freq;
        for(int x:nums){
            freq[x]++;
        }
        vector<int>ans;
        while(true){
        bool flag=false;
       for(auto &p:freq){
           if(p.second>0){
               ans.push_back(p.first);
               p.second--;
               flag=true;
           }
       }
        if(!flag) break;
            
        }
        return ans;
    }
};