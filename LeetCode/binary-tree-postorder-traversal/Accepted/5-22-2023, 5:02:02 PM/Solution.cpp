// https://leetcode.com/problems/binary-tree-postorder-traversal

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
    vector<int> vec;
        
    void postorder( TreeNode* node){
        
        if(node->left){
            postorder(node->left);
        }
        if(node->right){
            postorder(node->right);
        }
        vec.push_back(node->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        if(root==NULL){
            return vec;
        }
        postorder(root);
        return vec;
    }
};