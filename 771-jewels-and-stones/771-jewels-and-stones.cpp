class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans=0; 
        unordered_set<char> setJ(jewels.begin(),jewels.end()); 
        
        for(char s : stones){
            if(setJ.count(s)){
                ans++; 
            }
        }
        return ans; 
    }
};