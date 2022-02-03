class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> alpha(26); 
        
        for(char c : sentence){
            alpha[c-'a']=1; 
        }
        
        if(count(alpha.begin(),alpha.end(),1)==26){
            return true;
        }
        else{
            return false; 
        }
    }
};