class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int odd=0; 
        int even=0; 
      
        for(int n : position){
            if(n%2==0){
                odd++;
            }
            else{
                even++; 
            }
        }
        
        return min(odd,even); 
    }
};