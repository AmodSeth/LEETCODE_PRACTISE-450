class Solution {
public:
    void dfs (int node,vector<int> &visited,vector<int>adjlist[]){
        visited[node] = 1;
        
        for(auto it: adjlist[node]){
            
            if(!visited[it]){
                dfs(it,visited,adjlist);
            }
        }
        
        
            
        
    }
    int findCircleNum(vector<vector<int>>& isC) {
       
        //making adjlist
        int num = isC.size();
         vector<int> visited(num,0);
      vector<int> adjlist[num];
        
        for(int i = 0;i<num;i++){
            for(int j = 0; j<num;j++){
                if(isC[i][j] == 1 && i!=j ){
                    adjlist[i].push_back(j);
                    adjlist[j].push_back(i);
                }
            }
        }
        
        int cnt = 0;
        
        for(int i = 0;i<num;i++){
            if(!visited[i]){
                cnt++;
                dfs(i,visited,adjlist);
            }
        }
        
        return cnt;
    }
};