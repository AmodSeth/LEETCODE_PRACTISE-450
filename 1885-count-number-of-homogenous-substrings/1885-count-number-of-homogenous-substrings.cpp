class Solution {
public:
    int countHomogenous(string s) {
   int n = s.size();
   int char_count = 1;
    int  ans = 1;

   int mod = 1e9 + 7;
   
   	for (int i = 1; i < n; ++i)
   	{
   		if(s[i] == s[i-1]){
   			char_count  = char_count + 1;	
   		}
   		else{
   				char_count = 1;
   		}
   		ans = (ans + char_count) % mod;
   		
   		

   	}

   	return ans;
    }

};

/* homogenous substring
    if all character of the strings are the same ? i.e 
    abbcccaa
    a - 1  1
    bb - 1  len = 2 2*(2+1) 3
    ccc - 1 len = 3 3 * 4 6
    aa - 1 len = 2 2 * 3 = 3
    total = 1 + 3 + 6 +3 13

    xy = len = 1 1*2 = 1
    y = len = 1 1 *2 = 1 
    total = 2

    zzzzz len = 5 5 * 6 /2 15 

    approch iterate over the string 
    suppose we find the n substring with same letter 
    total += n *(n+1) /2 




*/