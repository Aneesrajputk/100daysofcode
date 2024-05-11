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

 // balanece binary tree vala  h ye
class Solution {
public:


int height(TreeNode* root){
    if(root==NULL){
        return 0;
            }

            int leftheight=height( root->left);
            int rightheight=height( root->right);
            int height=max(leftheight,rightheight)+1;
            return height;
            }

    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        //currentnode

        int leftheight=height(root->left);
        int rightheight=height(root->right);
        int diff=abs(leftheight-rightheight);

        bool curr=(diff<=1);

        int leftans=isBalanced(root->left);
        int rightans=isBalanced(root->right);

        if(curr && leftans&& rightans){
            return true;
        }
        else{
            return false;
        }
        
    }
};