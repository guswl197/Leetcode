class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> ver; 
        vector<int> hor;  
        int len=grid.size();
        int ans=0; 
        
        for(int i=0; i< len;i++){
            int ma=0; 
            ver.push_back(*max_element(grid[i].begin(), grid[i].end())); 
            for(int j=0; j<len; j++){
                int num=grid[j][i]; 
                ma= max(ma, num);  
            }
            hor.push_back(ma); 
        }
        
       for(int i=0; i<len;i++){
           for(int j=0; j<len;j++){
               int mi=min(ver[i],hor[j]); 
               if(grid[i][j]<mi){
                   ans+=mi-grid[i][j];
                   grid[i][j]=mi; 
               }
           }
       }
        
        return ans; 
    }
};