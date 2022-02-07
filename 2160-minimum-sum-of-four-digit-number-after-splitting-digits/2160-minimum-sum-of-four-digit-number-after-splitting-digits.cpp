class Solution {
public:
    int minimumSum(int num) {
        vector<int> v; 
        
        for(int i=0; i<4;i++){
            v.push_back(num%10); 
            num/=10; 
        }
        
        sort(v.begin(), v.end()); 
        
        int ans= v[0]*10 + v[3]+ v[1]*10+ v[2]; 
        
        return ans; 
    }
};