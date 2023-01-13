//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    set<string>v;
	    void permute(string s, string res){
	        if(s.length()==0){
	            v.insert(res);
	            return;
	        }
	        for(int i = 0; i<s.length();i++){
	            char ch = s[i];
	            string left = s.substr(0,i);
	            string right = s.substr(i+1);
	            string rest = left+right;
	            permute(rest,res+ch);
	        }
	        
	        
	        
	        
	    }
	
		vector<string>find_permutation(string S)
		{
		   //to store the unique strings
		   string ans = "";
		   permute(S,ans);
		   vector<string> v1;
		   for(auto x:v){
		       v1.push_back(x);
		   }
		   return v1;
		   
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends