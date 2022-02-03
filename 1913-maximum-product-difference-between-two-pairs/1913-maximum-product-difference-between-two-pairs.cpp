class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int ma,mi;
        int len=nums.size(); 

        sort(nums.begin(),nums.end()); 
        
        ma=nums[len-1]*nums[len-2]; 
        mi=nums[0]*nums[1]; 
        
        return ma-mi; 
    }
};