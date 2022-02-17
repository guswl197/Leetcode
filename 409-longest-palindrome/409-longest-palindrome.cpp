class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> alpha(52,0);
        int ans=0; 
        int mid=0; 
        
        for(int i=0; i<s.size(); i++){
            if('a'<= s[i] && s[i]<= 'z'){
                alpha[s[i]-'a']++; 
            }
            else{
                alpha[s[i]-'A'+26]++; 
            }
        }
        
        for(int i=0; i<52; i++){
            if(alpha[i]%2==0){
                ans+=alpha[i]; 
            }
            else{
                 ans+=alpha[i]-1;
                 mid=1; 
            }
        }
        
        return ans+mid;
    }
};