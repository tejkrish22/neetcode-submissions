class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& arr) {
        vector<vector<string>> ans;
        map<map<char,int>,vector<string>> mpp;

        for (string x:arr){
            map<char,int> hash;
            for (char i:x){
                hash[i]++;
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
