class Solution {
public:
    int minPartitions(string n) {
        int ans=0; 
        vector<int> v; 
        
        for(int i=0; i<n.size();i++){
            v.push_back(n[i]-'0'); 
        }
        
        sort(v.begin(),v.end()); 
        
        for(int i=0; i<v.size();i++){
            if(v[i]==0){
                continue; 
            }
            ans+=v[i]; 
            for(int j=i+1;j<v.size();j++){
                v[j]-=v[i]; 
            }
        }
        
        return ans; 
    }
};