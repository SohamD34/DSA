// https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal

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
        cin.tie(NULL);
        cout.tie(NULL);
    }

    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> v;
        queue<TreeNode*> q;

        if(root){
            q.push(root);
        } 
        int count = 1;

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

            if(count%2 == 0){
                reverse(row.begin(), row.end());
            }
            v.push_back(row); 
            count += 1;
        }

        return v; 
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>> ans;

        if(root == NULL){
            return ans;
        }
        
        ans = levelOrder(root);

        return ans;
    }
    
};