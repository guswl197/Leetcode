class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro=1;
        int sum=0;
        vector<int> arr; 
        
        while(1){
            arr.push_back(n%10); 
            n/=10; 
            if(n==0){
                break; 
            }
        }
        
        for(int i=0; i<arr.size();i++){
            sum+=arr[i]; 
            pro*= arr[i]; 
        }
        
        return pro-sum; 
    }
};