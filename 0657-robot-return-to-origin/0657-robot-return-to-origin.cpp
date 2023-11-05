class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0;
        int y = 0;
        
        for(int i =0;moves[i]!='\0';i++){
            char dir = moves[i];
            if (dir == 'R'){
                x++;
            }
            else if (dir == 'L') x--;
            else if (dir == 'U') y++;
            else y--;
        }
        if(x == 0 and y == 0) return true;
        else return false;
    }
};