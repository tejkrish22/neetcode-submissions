class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& arr) {
        vector<vector<string>> ans;
        map<vector<int>,vector<string>> mpp;

        for (string x:arr){
            vector<int> hash(26,0);
            for (char i:x){
                hash[i-'a']++;
            }
            auto it = mpp.find(hash);
            if (it==mpp.end()){
                mpp.insert({hash,{x}});
            }
            else {
                it->second.push_back(x);
            }
        }

        for (auto it:mpp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
