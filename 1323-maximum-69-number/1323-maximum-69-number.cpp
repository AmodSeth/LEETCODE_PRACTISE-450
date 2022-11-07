class Solution {
public:
    int maximum69Number (int num) {
        int temp = num;
        int index = 0;
        int rightindex = -1;
        while(temp){
            int a = temp%10;
            if(a == 6) rightindex = index; 
            index++;
            temp/=10;
        }
        if(rightindex == -1) return num;
        int ans = num + (3*pow(10,rightindex));    
        
        return ans;
    }
};