class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans; 
        map<int,vector<int>> m; 
    
        for(int i=0; i<groupSizes.size();i++){
           int key= groupSizes[i]; 
            if(m.count(key) > 0){
                m[key].push_back(i); 
            }
            else{
                m[key]=vector<int>{i}; 
            }
            
            if(m[key].size()==key){
                ans.push_back(m[key]);
                m.erase(key); 
            }
                       
        }
        
        return ans; 
    }
};