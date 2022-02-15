class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(), nums.end(),greater<int>()); 
        vector<int> ans; 
        int len= nums.size(); 
        int tmax=0; 
        int smax=0; 
        
        for(int i=0; i<len ;i++){
            tmax+= nums[i]; 
        }
        
        for(int i=0; i<len ;i++){
            if(smax>tmax){
                break;
            }
            ans.push_back(nums[i]); 
            smax+=nums[i]; 
            tmax-=nums[i]; 
        }
        
        return ans;
    }
};