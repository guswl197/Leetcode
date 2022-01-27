class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        
        int cnt=0; 
        auto i = ruleKey=="type"? 0: ruleKey=="color"? 1:2;
        
        for(auto item : items){
            if(item[i]==ruleValue){
                cnt++;
            }
        }
        return cnt;
    }
};