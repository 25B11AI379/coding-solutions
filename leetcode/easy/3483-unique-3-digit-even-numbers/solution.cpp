class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int>avl_freq(10,0);
        for(int i=0;i<digits.size();i++){
            avl_freq[digits[i]]++;
        }
        int ans=0;
        for(int i=100;i<=999;i++){
            if(i%2==0){
                int num = i;
                vector<int> temp = avl_freq;
                bool possible = true;
                while(num > 0){
                    int digit = num % 10;
                    if(temp[digit] > 0){
                        temp[digit]--;
                }
                    else{
                        possible=false;
                }
            num /= 10;
            }
             if(possible){
            ans++;
        }
        }
        }
        return ans;
    }
};