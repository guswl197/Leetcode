class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int len= grid.size(); 
        vector<int> row(len); 
        vector<int> col(len); 
        int ans=0; 
        
        for(int i=0; i<len ; i++){
            for(int j=0; j<len; j++){
             row[i]= max(row[i], grid[i][j]); 
             col[j]= max(col[j], grid[i][j]); 
            }
        }
        
        for(int i=0; i<len; i++){
            for(int j=0; j<len ;j++){
                ans+= min(row[i],col[j])- grid[i][j]; 
            }
        }
        
        return ans; 
    }
};