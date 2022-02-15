class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> ans; 
        int f=0;
        int b= s.size();
        
        for(int i=0; i<s.size();i++){
            if(s[i]=='I'){
                ans.push_back(f++); 
            }
            else{
                ans.push_back(b--); 
            }
        }
        
        ans.push_back(f);
        
        return ans; 
    }
};