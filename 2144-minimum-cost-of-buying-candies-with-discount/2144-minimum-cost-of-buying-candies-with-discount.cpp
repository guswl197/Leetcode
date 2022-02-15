class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int ans=0;
        sort(cost.begin(), cost.end(), greater<int>()); 
        
        for(int i=0; i<cost.size() ;i++){
            ans+= cost[i]; 
        }
        
        for(int i=2; i<cost.size(); i+=3){
            ans-=cost[i];
        }
        
        return ans; 
    }
};