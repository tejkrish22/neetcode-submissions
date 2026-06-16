class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        int candidate = arr[0];
        int cnt = 1;
        for (int i=1; i<n; i++){
            if (arr[i]==candidate) cnt++;
            else cnt--;
            if (cnt==0){
                candidate = arr[i];
                cnt = 1;
            }
        }
        cnt = 0;
        for (int x:arr){
            if (x==candidate){
                cnt++;
            }
        }
        if (cnt>(n/2)) return candidate;
        else return -1;
    }
};