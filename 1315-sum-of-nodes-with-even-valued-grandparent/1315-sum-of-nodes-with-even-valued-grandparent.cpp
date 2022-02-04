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
    int sumEvenGrandparent(TreeNode* root) {
        
        /*====BFS====*/
        
         if(root==NULL){
            return 0;
        }
        
        int sum=0;
        queue<TreeNode*> q; 
        q.push(root); 
        
        while(!q.empty()){
            auto top= q.front();
            q.pop();
            
           
                if(top->left){
                    q.push(top->left);
                    if(top->val%2==0){
                        if(top->left->left){
                            sum+=top->left->left->val;
                        }
                        if(top->left->right){
                            sum+=top->left->right->val;
                        }
                    }
                }
            
                if(top->right){
                    q.push(top->right);
                    if(top->val%2==0){
                        if(top->right->left){
                            sum+=top->right->left->val;
                        }
                        if(top->right->right){
                            sum+=top->right->right->val;
                        }
                    }
            }
        }
        
        return sum; 
        
        
        /*====DFS====*/
        /*
        if(root==NULL){
            return 0;
        }
        int sum=0; 
        
        if(root->val%2==0){
            if(root->left!=NULL && root->left->left!=NULL)
                sum+=root->left->left->val;
            if(root->left!=NULL && root->left->right!=NULL)
                sum+=root->left->right->val;
            if(root->right!=NULL && root->right->right!=NULL)
                sum+=root->right->right->val;
            if(root->right!=NULL && root->right->left!=NULL)
                sum+=root->right->left->val;
        }
        
        sum+=sumEvenGrandparent(root->left); 
        sum+=sumEvenGrandparent(root->right);
        return sum; 
        */
    }
};