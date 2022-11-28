class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int> mp;
        //hum sirf losers ko hi count krenge
        int n = matches.size();
        for(int i = 0;i<n;i++){
            mp[matches[i][1]]++;
        }
        vector<int> win;
        vector<int> los;
        for(int i = 0;i<n;i++){
            if(mp[matches[i][1]] == 1)
            {
                los.push_back(matches[i][1]);
            }
            if(mp.find(matches[i][0])== mp.end()){
                //if not foudn that is its a winner
                win.push_back(matches[i][0]);
                mp[matches[i][0]]=2;
            }
                
        }
        sort(los.begin(),los.end());
        sort(win.begin(),win.end());
        
        return {win,los};
    }
};