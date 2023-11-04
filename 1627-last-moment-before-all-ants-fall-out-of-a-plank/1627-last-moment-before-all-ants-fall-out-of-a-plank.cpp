class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int lt = 0;
       
        for(auto it: left){
            lt = max(lt,it); 
        }
        for(auto it: right){
            lt = max(lt,n-it);
        }   
        return lt;
    }
};