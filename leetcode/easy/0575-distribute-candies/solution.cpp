class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int maxi=candyType.size()/2;
        set<int>s(candyType.begin(),candyType.end());
        return min(maxi,(int)s.size());
    }
};