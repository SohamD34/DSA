// https://leetcode.com/problems/odd-even-linked-list

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
    ListNode* oddEvenList(ListNode* head) {
        
        ListNode* odd = head;
        ListNode * evenhead = head->next;
        ListNode* even = evenhead;

        while(odd->next!=NULL && even->next!=NULL){
            odd->next = even->next;
            even->next = odd->next->next;
            odd = odd->next;
            even = even->next;
        }

        odd->next = evenhead;

        return head;
    }
};