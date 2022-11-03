class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        map<string,int> mp;
        int ans = 0;
        int len = 0;
        bool flag = false;
        for(auto it:words){
            mp[it]++;
        }
        for(auto x:mp){
            //same case - same letter
            if(x.first[0]==x.first[1]){
                
            if(x.second %2){
                flag = true;
                //ek minus krke uski length
                len += x.second - 1;
            }
            
            else{
                len += mp[x.first];
            }
                //remove the string
                mp.erase(x.first);
            }
        else{
            string str = x.first;
            reverse(str.begin(),str.end());
            if(mp.find(str)!=mp.end()){
                ans += min(mp[str],x.second)*4;
            }
             mp.erase(str);
            
            mp.erase(x.first);
           
        }
            
            
            
            
        }
        if( flag ) return (ans+len*2+2);
          else  return (ans+len*2);
    }
};