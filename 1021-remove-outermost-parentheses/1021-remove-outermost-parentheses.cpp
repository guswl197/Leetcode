class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans; 
        string result; 
        int num=0; 
   
        for(int i=0; i<s.size();i++){ 
            s[i]=='('? num++ : num--; 
            ans+=s[i]; 
            
            if(num==0){
               ans.erase(0,1); 
               ans.erase(ans.size()-1,ans.size()); 
               result+=ans;
               ans="";
            }
        }
        
        return result; 
    }
};