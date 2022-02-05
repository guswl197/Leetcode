class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index)    {
    vector<int> ta; 
        
    for(int i=0; i<nums.size();i++){
        ta.insert(ta.begin()+index[i],nums[i]); 
        }
        return ta; 
    }
};