#include <bits/stdc++.h>
using namespace std;

int countLength(ListNode* start){
    int count = 0;
    ListNode* currptr = start;
    while(currptr){
        count ++;
        currptr = currptr->next;
    }
    return count;
}

TreeNode* createBST(ListNode* head, int left, int right){

    // base condition -- left > right --> return NULL ptr;
    // propagation --> calculate mid;
    // 1st left side --> left to (mid - 1)
    // 2nd right side --> (mid+1) to right 

    if(left > right){
        return nullptr;
    }

    int mid = left + (right - left)/2;

    ListNode* midptr = head;
    for(int i=0; i<mid; i++){
        midptr = midptr->next;
    }
    TreeNode* root = new TreeNode(midptr->val);

    root->left = createBST(head, left, mid-1);
    root->right = createBST(head, mid+1, right);

    return root;
}

TreeNode* sortedListToBST(ListNode* head) {
    int n = countLength(head);
    return createBST(head, 0, n-1);
}   