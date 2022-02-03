class Solution {
public:
    string replaceDigits(string s) {
        
        string ans; 
        
        for(int i=0; i<s.size();i+=2){
            ans+=s[i]; 
            if('0'<=s[i+1]&&s[i+1]<='9')
            ans+=(s[i]+(s[i+1]-'0')); 
        }
        
        return ans; 
    }
};