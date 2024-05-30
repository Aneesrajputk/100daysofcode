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
int ans = 0 ;
    int height(TreeNode* root ){
        if(root == NULL){
            return 0 ;
        }
        int lh = height(root->left );
        int rh = height(root->right);
        return max(lh,rh) +1 ;
    }
    int deepestLeavesSum(TreeNode* root) {
        int h = height(root);
        helper(root , h);
        return ans ;
    }

    void helper(TreeNode* root , int height ){
        if(root == NULL){
            return ;
        }
        if(height == 1){
            ans = ans + root->val;
        }
        helper(root->left , height-1);
        helper(root->right , height-1);
    
        
    }
};
