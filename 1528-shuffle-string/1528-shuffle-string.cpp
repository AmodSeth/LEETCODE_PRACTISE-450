class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = indices.size();
        string ans = s;
        for(int i = 0;i < n ;i++)
        {
            int t = indices[i];
            ans[t] = s[i];
        }
        return ans;
    }
};