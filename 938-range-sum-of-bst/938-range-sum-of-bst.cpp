/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
int sum=0;
    
    public:
    int rangeSumBST(TreeNode* root, int low, int high) {
       //dfs
        
        if(!root){
            return 0;
        }
        
        if(low<=root->val && root->val <=high){
            sum+=root->val; 
        }
        if(root->right){
                rangeSumBST(root->right,low,high);
        }
        if(root->left){
                rangeSumBST(root->left,low,high);
        }
        
    
        return sum; 
    }
};