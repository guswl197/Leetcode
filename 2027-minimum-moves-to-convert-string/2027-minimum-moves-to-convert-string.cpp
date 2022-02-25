class Solution {
public:
    int minimumMoves(string s) {
        int ans=0; 
        
        for(int i=0; i<s.size(); i++){
            if(s[i]=='X'){
                for(int j=0; j<3; j++){
                    if(i+j<s.size()){
                     s[i+j]='O';
                    }
                }
                ans++; 
            }
        }
        
        return ans;
    }
};