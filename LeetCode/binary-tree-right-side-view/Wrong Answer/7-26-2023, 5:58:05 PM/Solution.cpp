// https://leetcode.com/problems/binary-tree-right-side-view

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

    vector<int> rsv;

    vector<int> rightSideView(TreeNode* root) {
        
        while(root){
            rsv.push_back(root->val);

            if(root->right){
                root = root->right;
            }
            else{
                root = root->left;
            }
        }

        return rsv;
    }
};