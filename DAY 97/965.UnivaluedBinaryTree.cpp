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
 bool helper(TreeNode* root , int val){
        if(root == NULL){
            return true ;
        }

        if(root->val != val){
            return false ;
        }

        bool leftans = helper(root->left,val);
        bool rightans = helper(root->right,val);
 
        return leftans && rightans;
}
    bool isUnivalTree(TreeNode* root) {
        return helper(root,root->val);
    }
};