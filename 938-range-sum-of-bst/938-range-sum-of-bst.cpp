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
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        if(!root){
            return 0; 
        }
        else if(root->val>=low && root->val <= high){
           return root->val+rangeSumBST(root->right,low,high)+ rangeSumBST(root->left,low,high);
        }
        else if(root->val > high){
            return rangeSumBST(root->left,low,high);
        }
          else if(root->val < low){
            return rangeSumBST(root->right,low,high);
        }
    
        return 0; 
    }
};