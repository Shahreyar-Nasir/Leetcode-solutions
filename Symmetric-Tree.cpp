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
  bool helper(TreeNode* subL, TreeNode* subR){
        if((subL == nullptr && subR == nullptr)) return true;
        if((subL == nullptr || subR == nullptr)) return false;
        if( subL->val != subR->val ) return false;  
        return helper(subL->left, subR->right) && helper(subL->right, subR->left);
    }

    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return true;
        return helper(root->left, root->right);
    }
};