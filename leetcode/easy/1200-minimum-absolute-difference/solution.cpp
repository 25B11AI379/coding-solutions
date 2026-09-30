class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int min=INT_MAX;
        vector<vector<int>>s;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;i++){
           int diff=arr[i+1]-arr[i];
           if(min>diff){
            min=diff;
           }
        }
        for(int i=0;i<arr.size()-1;i++){
            if(abs(arr[i]-arr[i+1])==min){
            s.push_back({arr[i],arr[i+1]});
            }
        }
        return s;
    }
};