#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode* createBST(vector<int>& nums, int left, int right){

    // base condition -- left > right --> return NULL ptr;
    // propagation --> calculate mid;
    // 1st left side --> left to (mid - 1)
    // 2nd right side --> (mid+1) to right 

    if(left > right){
        return nullptr;
    }

    int mid = left + (right - left)/2;
    TreeNode* root = new TreeNode(nums[mid]);
    root->left = createBST(nums, left, mid-1);
    root->right = createBST(nums, mid+1, right);

    return root;
}

TreeNode* sortedArrayToBST(vector<int>& nums) {
    int n = nums.size();
    return createBST(nums, 0, n-1);
}


int main(){

    vector<int> nums = {-10, -3, 0, 5, 9};
    TreeNode* root = sortedArrayToBST(nums);

    return 0;
}