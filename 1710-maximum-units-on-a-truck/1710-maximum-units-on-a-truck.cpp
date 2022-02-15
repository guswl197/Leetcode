class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int ans=0; 
        int num=0; 
        int len = boxTypes.size();
        
        for(int i=0; i<len-1 ;i++){
            for(int j=i+1 ; j<len;j++){
                if(boxTypes[i][1]<boxTypes[j][1]){
                    int b=boxTypes[i][0]; 
                    int u=boxTypes[i][1];
                    boxTypes[i]=boxTypes[j]; 
                    boxTypes[j][0]=b;
                    boxTypes[j][1]=u;
                }
            }
        }
    
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