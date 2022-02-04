class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans;
        
        for(int i=0; i<boxes.size();i++){
            int num=0; 
            for(int j=0; j<boxes.size();j++){
                if(boxes[j]=='1'){
                    num+=abs(i-j);
                }
            }
            ans.insert(ans.begin()+i,num); 
        }
        
        return ans; 
    }
};