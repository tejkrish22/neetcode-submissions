class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n = arr.size();
        int l = 0;
        int r = 1;
        while (r<n){
            if (arr[r]==arr[l]){
                r++;
            }
            else {
                arr[l+1] = arr[r];
                r++;
                l++;
            }
        }
        return l+1;
    }
};