class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        for (char x:s){
            if (isalpha(x) or isdigit(x)){
                temp += tolower(x);
            }
        }
        cout<<temp;
        int l = 0;
        int r = temp.size()-1;
        while (l<r){
            if (temp[l]!=temp[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};
