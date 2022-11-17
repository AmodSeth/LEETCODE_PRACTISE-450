class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        // length * breadth
        int box1 = (ax2 - ax1) * (ay2 - ay1);
        int box2 = (bx2 - bx1) * (by2 - by1);
        
        //for the common area 
        
         int c1 = max(ax1,bx1); 
        int c2 = max(ay1,by1);
        int c3 = min(ax2,bx2);
        int c4 = min(ay2,by2);
        
        int len = c3 - c1;
        int bre = c4 - c2;
        int box3 = 0;
        
        if(len > 0 && bre > 0){
            box3 = len * bre;
        }
        cout<<box1<<" "<<box2<<" "<<box3;
        return box1 + box2 - box3;
        
        
    }
};