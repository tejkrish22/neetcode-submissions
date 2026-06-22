class Solution {
public:
    bool hasDuplicate(vector<int>& arr) {
        unordered_set<int> hash;
        for (int x:arr){
            if (hash.count(x)!=0) return true;
            else hash.insert(x);
        }
        return false;
    }
};