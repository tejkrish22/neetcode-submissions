class Solution {
public:

    map<char,int> getAnagram (string& s){
        map<char,int> mpp;
        for (char c : s){
            mpp[c]++;
        }
        return mpp;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();

        map<map<char,int>,vector<string>> mpp;

        for (int i=0; i<n; i++){
            map<char,int> currAnagram = getAnagram(strs[i]);
            auto it = mpp.find(currAnagram);
            if (it!=mpp.end()){
                it->second.push_back(strs[i]);
            }
            else {
                mpp.insert({currAnagram,{strs[i]}});
            }
        }

        vector<vector<string>> ans;
        for (auto it:mpp){
            ans.push_back(it.second);
        }
        
        return ans;
    }
};
