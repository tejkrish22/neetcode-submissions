class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size();
        int sumN = (n*(n+1))/2;
        int sumArr = 0;
        for (int x:arr) sumArr+=x;
        return sumN-sumArr;
    }
};
