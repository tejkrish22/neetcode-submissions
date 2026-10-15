class Solution {
   public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();

        unordered_map<int, int> mpp;

        for (int i = 0; i < n; i++) {
            int other = target - arr[i];
            auto it = mpp.find(other);
            if (it != mpp.end()) {
                return {mpp[other],i};
            }
            mpp.insert({arr[i], i});
        }
        return {-1, -1};
    }
};
