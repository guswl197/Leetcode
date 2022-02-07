class Solution {
public:
    string removeOuterParentheses(string s) {
        vector<string> v(10000); 
        string ans; 
        int j=0; 
        int cnt=0;
         
        for(int i=0; i<s.size();i++){
            if(s[i]=='('){
                cnt++; 
                v[j]+=(s[i]); 
            }
            else{
                cnt--; 
                v[j]+=(s[i]); 
            }
            
            if(cnt==0){
               j++; 
            }
        }
    
        for(int i=0; i<j;i++){
            v[i].erase(v[i].size()-1); 
            v[i].erase(v[i].begin());  
            ans+=v[i];  
        }
        
        return ans; 
    }
};