// https://leetcode.com/problems/kth-smallest-element-in-a-bst

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

    vector<int> inOrder(TreeNode* root){

        if(root == NULL){
            return {};
        }

        vector<int> ans = inOrder(root->left);
        ans.push_back(root->val);
        vector<int> temp = inOrder(root->right);

        for(auto i: temp){
            ans.push_back(i);
        }
        return ans;
    }

    int kthSmallest(TreeNode* root, int k) {

        vector<int> ans = inOrder(root);

        return ans[k-1];
    }
};