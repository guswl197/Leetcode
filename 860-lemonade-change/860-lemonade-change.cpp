class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0;
        int ten=0; 
        int ans=true;
        
        for(int i=0; i<bills.size(); i++){
            int sub= bills[i]-5; 
            if(sub==5){
                five--;
                ten++; 
            }
            else if(sub==15){
                if(ten>0){
                    ten--; 
                    five--; 
                }
                else{
                    five-=3;
                }
            }
            else{ //sub == 0 
                five++; 
            }
            
            if(five<0){
                ans =false; 
            }
        }
        return ans;
    }
 
};