class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
            int n = dist.size();
            vector<float> time;
            for (int i = 0; i < n; i++) {
            time.push_back((float) dist[i] / speed[i]);
        }
            //check what it reaches first
            sort(time.begin(),time.end());


            int cnt = 0;
            for(int i = 0;i<n;i++){
                //check the arrival time
                if (time[i] <= i){
                    break;
                } 
                cnt ++;
            }

    return cnt;
    }
};

/*
n monster dist[array] speed[array]
    [ 1  3   4]                     [1 1 2 3]
                                    [1 1 1 1]
    [ 1  1   1]
    speed till it turns 0          1 -------- n
 1- [ 0 2 3]                      1- [0 0 ]
 2 - [ 0 1 2]
 3 - [0 0 1]                      time = distance / speed;
 4- [ 0 0 0]

        hint - get the time at what they react on oit



*/