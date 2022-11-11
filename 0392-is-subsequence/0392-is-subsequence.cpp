class Solution {
    //agar dono string ke character match krenge tbb dono mein aage bdenge
    //vrna string m mein
    bool substr(string s,string t,int m,int n){
        
        if(m == 0 )return true;
        //ki mtlb phele khtm hogyi string
        if(n == 0) return false;
        //cahracter match
        if(s[m-1] == t[n-1]) return substr(s,t,m-1,n-1);
        //vrna agar nhi hue to 
        return substr(s,t,m,n-1);
     }
public:
    
    bool isSubsequence(string s, string t) {
        int m = s.length();
        int n = t.length();
        return substr(s,t,m,n);
    }
};