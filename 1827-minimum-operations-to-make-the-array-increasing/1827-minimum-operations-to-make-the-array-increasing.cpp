class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans=0;  
        if(nums.size()==1){
            cout<<0<<'\n'; 
            return 0; 
        }
        
        for(int i=0; i<nums.size()-1;i++){
            if(nums[i]>=nums[i+1]){
                ans+=nums[i]+1-nums[i+1];
                nums[i+1]=nums[i]+1; 
            }
        }
        
        return ans; 
    }
};