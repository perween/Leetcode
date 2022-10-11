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
    
    bool isBST(TreeNode* root, TreeNode* left, TreeNode* right)
    {
        if(root == NULL)
            return true;
        if(left != NULL && root->val <= left->val) 
           return false;
        if(right != NULL && root->val >= right->val )
            return false;
        // check recursively
        return (isBST(root->left, left, root ) && isBST(root->right, root, right));
    }
    bool isValidBST(TreeNode* root) {
       return isBST(root, NULL, NULL);
        
    }
};
