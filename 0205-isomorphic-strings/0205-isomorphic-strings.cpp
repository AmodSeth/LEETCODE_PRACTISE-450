class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,int> mp1;
        map<char,int> mp2;
        //base case
        if(s.length()!=t.length()) return false;
        for(int i = 0;i<s.length();i++){
           mp1[s[i]] = i+1;
            mp2[t[i]] = i+1;
        }
        for(int  i = 0 ;i < s.length();i++){
            if(mp1[s[i]]!=mp2[t[i]]) return false;
        }
        return true;
    }
};