class Solution {
public:
    string firstPalindrome(vector<string>& words) {
       
        for(string str : words){
            string rev(str.rbegin(),str.rend()); 
            if(str== rev){
                return str; 
            }
        }
        
        return ""; 
    }
};