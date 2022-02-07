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
    int ans=0; 
    
    int sumEvenGrandparent(TreeNode* root) {
        
        if(!root){
            return 0;
        }
      
       if(root->left){
           sumEvenGrandparent(root->left); 
           if(root->val %2 ==0){
               if(root->left->left){
                    ans+=root->left->left->val;
               }
               if(root->left->right){
                    ans+=root->left->right->val;
               }
           }
       }
       if(root->right){
            sumEvenGrandparent(root->right); 
           if(root->val %2 ==0){
               if(root->right->left){
                    ans+=root->right->left->val;
               }
               if(root->right->right){
                    ans+=root->right->right->val;
               }
           }
       }
        
        return ans; 
    }
};