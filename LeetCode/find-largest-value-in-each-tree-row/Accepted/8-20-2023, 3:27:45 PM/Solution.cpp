// https://leetcode.com/problems/find-largest-value-in-each-tree-row

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

    vector<int> levelOrder(TreeNode* root) {

        vector<int> row;
        queue<TreeNode*> q;

        if(root){
            q.push(root);
        } 
        
        while (q.size()) {

            int len = q.size();
            int max_in_row = q.front()->val;
            
            while (len--) {
                TreeNode* node = q.front();
                
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }

                max_in_row = max(max_in_row, node->val);
                q.pop();
            }

            row.push_back(max_in_row);
        }
        return row; 
    }

    vector<int> largestValues(TreeNode* root) {
        return levelOrder(root);
    }
};