// https://leetcode.com/problems/delete-node-in-a-linked-list

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    void deleteNode(ListNode* node) {
        
        ListNode* node_to_delete = node;
        ListNode* prev;

        while(node->next){
            node->val = node->next->val;
            prev = node;
            node = node->next;
        }

        prev->next = NULL;
    }
};