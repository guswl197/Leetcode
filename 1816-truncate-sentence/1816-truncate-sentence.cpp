class Solution {
public:
    string truncateSentence(string s, int k) {
        
        string ans,num;
        stringstream stream;
        stream.str(s);
        vector<string> v; 
        
        while(stream >> num){
            v.push_back(num); 
        }
        
        for(int i=0; i<k-1;i++){
            ans+=v[i];
            ans+=" "; 
        }
        ans+=v[k-1]; 
        
        return ans; 
    }
};