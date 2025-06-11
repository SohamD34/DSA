// https://leetcode.com/problems/remove-nth-node-from-end-of-list

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int len = 0;
        ListNode* countptr = head;
        while(countptr){
            len+=1;
            countptr = countptr->next;
        }

        if(len > 1){
            ListNode* prev = head; 
            ListNode* toberem = head;

            for(int i=0; i<len-n -1; i++){
                prev = prev->next;
            }

            for(int i=0; i<len-n; i++){
                toberem = toberem->next;
            }
            
            prev->next = toberem->next;
        }
        else{
            if(n==1){
                return NULL;
            }
        }
        return head;
    }
};