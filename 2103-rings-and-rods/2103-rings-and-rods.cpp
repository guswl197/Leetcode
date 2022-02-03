class Solution {
public:
    int countPoints(string rings) {
        
        vector<vector<int>> v(11,vector<int>(4,0)); 
        
        for(int i=0; i<rings.length();i+=2){
            if(rings[i]=='R'){
                v[rings[i+1]-'0'][0]=1; 
            }
            else if(rings[i]=='G'){
                v[rings[i+1]-'0'][1]=1;
            }
            else{ //'B'
                v[rings[i+1]-'0'][2]=1;
            }
        }
    
        int ans=0; 
        
        for(int i=0; i<v.size();i++){
            if(count(v[i].begin(),v[i].end(),1)==3){
                ans++; 
            }
        }
        
        return ans; 
    }
};