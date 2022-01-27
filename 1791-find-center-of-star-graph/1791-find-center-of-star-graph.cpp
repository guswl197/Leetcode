class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int ans;
        int a= edges[0][0]; 
        int b= edges[0][1];
        
       for(int i=1; i<edges.size();i++){
           if(a==edges[i][0]||a==edges[i][1]){
               ans=a; 
           }
           else{
               ans=b; 
           }
       }
        
        return ans; 
    }
};