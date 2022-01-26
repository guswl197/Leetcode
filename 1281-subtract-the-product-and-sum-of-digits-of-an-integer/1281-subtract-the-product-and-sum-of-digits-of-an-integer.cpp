class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro=1;
        int sum=0;
        
        while(1){
            sum+=n%10;
            pro*=n%10;
            n/=10; 
            if(n==0){
                break; 
            }
        }
        
        return pro-sum; 
    }
};