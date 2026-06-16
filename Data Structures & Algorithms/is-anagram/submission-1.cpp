class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        map<char,int> mpp_s, mpp_t;

        for (char x:s) mpp_s[x]++;
        for (char x:t) mpp_t[x]++;

        return mpp_s == mpp_t;
    }
};
