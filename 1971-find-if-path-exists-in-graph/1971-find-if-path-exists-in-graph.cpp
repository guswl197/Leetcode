class Solution {
    
public:    
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int, vector<int>> m; 
        for(auto e : edges){
            m[e[0]].push_back(e[1]); 
            m[e[1]].push_back(e[0]); 
        }
        
        vector<bool> visit(n,0); 
        queue<int> q; 
        q.push(source); 
        visit[source]=1; 
        
        while(!q.empty()){
            int x =q.front(); 
            q.pop(); 
            
            if(x==destination){
                return 1; 
            }
            
            for(int i=0; i<m[x].size();i++){
                if(!visit[m[x][i]]){
                    visit[m[x][i]]=1; 
                    q.push(m[x][i]); 
                }
            }
            
        }
        return false; 
    }
};