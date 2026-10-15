class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> sMap;
        map<char,int> tMap;

        for (int i=0; i<s.size(); i++){
            sMap[s[i]]++;
        }

        for (int i=0; i<t.size(); i++){
            tMap[t[i]]++;
        }

        return sMap == tMap;
    }
};
