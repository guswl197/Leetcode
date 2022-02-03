class Solution {
public:
    int maxDepth(string s) {
        
        int ans=0; 
        int num=0;
        
        for(int i=0; i<s.length();i++){ 
            
            if(s[i]=='('){
                num++;
                ans=max(ans,num);
            }
            else if(s[i]==')'){
                num--; 
            }
        }
        
        return ans;
    }
};