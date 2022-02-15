class Solution {
public:
    int minTimeToType(string word) {
        int ans=0; 
        char ptr='a'; 
        int sub=0; 
        
        for(int i=0; i<word.size(); i++){
            sub=abs(word[i]-ptr); 
            if(sub<14){
                ans+= sub;
            }
            else{
                ans+= 26-sub;
            }
            ans++;
            ptr=word[i]; 
        }
        
        return ans; 
    }
};