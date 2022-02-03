class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0; 
        int len=arr.size();
        
       for(int i=0; i<len; i++){
           for(int j=i;j<len; j+=2){
               for(int k=i;k<=j; k++){
                   sum+=arr[k];  
               }
           }
       }
        
        return sum; 
    }
};