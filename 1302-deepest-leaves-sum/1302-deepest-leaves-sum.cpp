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
    //int deepest=0, sum=0;
    int sum=0,n; 
    int deepestLeavesSum(TreeNode* root,int depth=0) {
    /*====dfs===== 재귀*/
        /*
        int num=1;
        if(!root){
           return 0; 
         }
        
        if(!root->left && !root->right){ //leaf
            if(depth==deepest){
                sum+=root->val;
            }
            else if(depth>deepest){
                sum=root->val;
                deepest=depth; 
            }
        }
        
        deepestLeavesSum(root->left, depth+1); 
        deepestLeavesSum(root->right, depth+1); 
        return sum; 
        */ 
        
        /*====bfs===== queue*/
        queue<TreeNode*> q;
        q.push(root); 
        while(!q.empty()){
            sum=0, n=q.size();
            
            for(int i=0; i<n;i++){
                auto top=q.front(); 
                q.pop();
                sum+=top->val;
                if(top->left){
                    q.push(top->left); 
                }
                if(top->right){
                    q.push(top->right); 
                }
            }
        }
        
        return sum; 
    }
};