class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans=0; 
       
        for(int i=0; i<arr.size();i++){
            for(int j=i; j<arr.size();j+=2){
                for(int k=i;k<j+1;k++){
                    ans+=arr[k];
                }
            }
        }
        
        return ans;
    }
};