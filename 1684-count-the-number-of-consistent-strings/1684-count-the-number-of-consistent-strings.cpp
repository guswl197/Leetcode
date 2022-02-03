class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        int len= words.size(); 
        vector<bool> alpha(26); 
        
         for(char c : allowed){
             alpha[c-'a']= true;
         }
        
        for(string str : words){
            for(char c : str){
                if(!alpha[c-'a']){
                    len--; 
                    break; 
                }
            }
        }
        
        return len; 
    }
};