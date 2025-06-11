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
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }

    vector<int> levelOrder(TreeNode* root) {

        vector<int> v;
        queue<TreeNode*> q;

        if(root){
            q.push(root);
        } 
        
        while (q.size()) {

            int len = q.size();
            vector<int> row;

            while (len--) {
                TreeNode* node = q.front();
                
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }

                row.push_back(node->val);
                q.pop();
            } 

            v.push_back(row[row.size()-1]);
        }
        return v; 
    }

    vector<int> rightSideView(TreeNode* root) {
        
        return levelOrder(root);
    }
};