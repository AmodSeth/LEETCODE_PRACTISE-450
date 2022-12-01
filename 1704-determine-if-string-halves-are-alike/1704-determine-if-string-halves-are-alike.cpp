class Solution {
public:
    bool halvesAreAlike(string s) {
         transform(s.begin(),s.end(),s.begin(),::tolower);
    if(s.size()%2)
        return false;
    
    int ctr1=0,ctr2=0;
    for(int i=0;i<s.size()/2;i++)
    {
        if(s[i]=='a'|| s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u')
            ctr1++;
    }
     for(int i=s.size()/2;i<s.size();i++)
    {
        if(s[i]=='a'|| s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u')
            ctr2++;
    }
  
    if(ctr1==ctr2)
        return true;
    
    return false;
}
    
};