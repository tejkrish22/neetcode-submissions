class Solution {
public:
    int findMin(vector<int> &arr) {
        int n = arr.size();
        int l = 0;
        int r = n-1;
        while (l<r){
            int mid = (l+r)/2;
            if (arr[mid]>=arr[r]){
                l = mid + 1;
            }
            else if (arr[mid]<arr[r]){
                r = mid;
            }
        }
        return arr[l];
    }
};
