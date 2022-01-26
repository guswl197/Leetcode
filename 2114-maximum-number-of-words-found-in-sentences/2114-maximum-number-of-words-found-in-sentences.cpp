class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans=1;
        
        for(int i=0; i<sentences.size();i++){
            int m=1; 
            int len=sentences[i].size(); 
            for(int j=0; j<len ;j++){
                if(sentences[i][j]==' '){
                    m++;
                }
            }
            ans=max(ans,m); 
        }
        
        return ans; 
    }
};