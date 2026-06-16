class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        unordered_map<int,int> mpp;
        for (int i=0; i<n; i++){
            int x = target - arr[i];
            auto it = mpp.find(x);
            if (it==mpp.end()){
                mpp.insert({arr[i],i});
            }
            else {
                return {it->second,i};
            }
        }
        return {-1,-1};
    }
};
