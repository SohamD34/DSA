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
    void zigzagLevelOrder(TreeNode * root , vector<vector<int>> &ans){
        
        stack<TreeNode*> current;
        stack<TreeNode*> next_layer;

        current.push(root);
        int level = 1;

        vector<int> v;

        while(current.size() > 0){

            TreeNode* front = current.top();
            current.pop();
            v.push_back(front->val);

            if(level%2 == 1){
                if(front->left != NULL){
                    next_layer.push(front->left);
                }
                if(front -> right != NULL){
                    next_layer.push(front->right);
                }
            }
            else{
                if(front ->right != NULL){
                    next_layer.push(front->right);
                }
                if(front ->left != NULL){
                    next_layer.push(front ->left);
                }
            }
            
            if(current.size() == 0){

                swap(next_layer , current);
                ans.push_back(v);

                v.clear();
                level++;
            }
        }
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>> ans;

        if(root == NULL){
            return ans;
        }
        
        zigzagLevelOrder(root, ans);

        return ans;
    }
    
};