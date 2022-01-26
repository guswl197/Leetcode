class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<char> arr(indices.size());
        string str; 
        
        for(int i=0;i<indices.size();i++){
            arr[indices[i]]=s[i]; 
        }
        
        for(int i=0;i<indices.size();i++){
            str.push_back(arr[i]);
        }
     
        return str; 
    }
};