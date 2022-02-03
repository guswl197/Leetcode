class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        int ans=0; 
        
         for(int i=0; i<words.size();i++){
             int num=0; 
             for(int k=0; k<words[i].size();k++){ 
                    for(int j=0; j<allowed.length();j++){
                       if(words[i][k]==allowed[j]){
                           num++; 
                           break; 
                           }
                     }
                    
              }
             
             if(words[i].size()==num){
                 ans++;
             }
        }
        
        return ans; 
    }
};