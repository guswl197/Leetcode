class Solution {
public:
    static bool compare(vector<int>& a, vector<int>& b){
        return a[1]> b[1];     
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int ans=0; 
        int num=0; 
        int len = boxTypes.size();
        
        sort(boxTypes.begin(), boxTypes.end(), compare); 
    
        for(int i=0; i<len; i++){
            if(truckSize==0){
                break; 
            }
            if(boxTypes[i][0]<truckSize){
                ans+= boxTypes[i][1]*boxTypes[i][0]; 
                truckSize-=boxTypes[i][0];
            }
            else{
                ans+= boxTypes[i][1]*truckSize; 
                truckSize-=truckSize; 
            }
        }
        
        return ans;
    }
};