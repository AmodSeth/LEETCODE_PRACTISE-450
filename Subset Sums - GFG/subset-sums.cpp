//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void sub_helper(int ind,int isum,vector<int> &arr,int n,vector<int> &sum){
        //base case
        if(ind == n){
            sum.push_back(isum);
            return;
        }
        //pick
        sub_helper(ind+1,isum+arr[ind],arr,n,sum);
        
        
        
        //not pick mein bhi index increment krenge 
        sub_helper(ind+1,isum,arr,n,sum);
        
        
        
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> sum;
        
        //(ind,intital_sum,array,length,ds)
        sub_helper(0,0,arr,N,sum);
        
     
        return sum;
        
        
        
        
        
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends