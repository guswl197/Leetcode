class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
       
        vector<int> ans(queries.size()); 
        
        for(int i=0; i<queries.size();i++){
            int r=queries[i][2]; 
            int x=queries[i][0];
            int y=queries[i][1]; 
            for(int j=0; j<points.size();j++){
               int dist= (x-points[j][0])*(x-points[j][0])+(y-points[j][1])*(y-points[j][1]);
               if(dist <= r*r){
                   ans[i]++;
               }
            }
        }
        
        return ans; 
    }
};