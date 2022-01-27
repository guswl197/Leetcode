class Solution {
public:
    static bool compare(string s1, string s2){
        if(s1[s1.size()-1]>s2[s2.size()-1]){
            return false; 
        }
        else{
            return true; 
        }
    }
    
    string sortSentence(string s) {
        stringstream stream;
        stream.str(s); 
        string num;
        string result; 
        vector<string> str1;
        while(stream >> num){
            str1.push_back(num); 
        }
        
        sort(str1.begin(),str1.end(),compare); 
        
        for(int i=0; i<str1.size();i++){
            str1[i].erase(str1[i].size()-1); 
            result+=(str1[i]+' '); 
        }
    
        result.erase(result.size()-1);
        
       return result; 
    }
};