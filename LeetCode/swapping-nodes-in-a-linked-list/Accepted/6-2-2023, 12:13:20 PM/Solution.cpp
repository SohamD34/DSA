// https://leetcode.com/problems/swapping-nodes-in-a-linked-list

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode* countptr = head;
        int len = 0;

        while(countptr){
            len+=1;
            countptr = countptr->next;
        }

        ListNode* frontptr = head;
        ListNode* backptr = head;

        for(int i=0; i<k-1; i++){
            frontptr = frontptr->next;
        }

        for(int i=0; i<len-k; i++){
            backptr = backptr->next;
        }

        int val1 = frontptr->val;

        frontptr->val = backptr->val;
        backptr->val = val1;

        return head;
    }
};