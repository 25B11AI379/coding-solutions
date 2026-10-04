class Solution {
public:
    int minRotations(string s) {
        int total_r=0;
        int curr_d=0;
        for(char c:s){
            int target_d=c-'0';
            int diff=abs(target_d-curr_d);
            total_r+=min(diff,10-diff);
            curr_d=target_d;
        }
        return total_r;
    }
};