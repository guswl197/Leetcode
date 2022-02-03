class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."}; 
        set<string> str;
        
        for(string w : words){
            string code; 
            for(char c : w){
                code+=morse[c-'a']; 
            }
            str.insert(code); 
        }
        
        return str.size(); 
    }
};