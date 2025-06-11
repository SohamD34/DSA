// https://leetcode.com/problems/rotate-list

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

    ListNode* rotateRight(ListNode* head, int k) {
        
        ListNode* countptr = head;
        int len = 0;

        while(countptr){
            len+=1;
            countptr = countptr->next;
        }

        ListNode* lastptr = head;
        for(int j=0; j<len-1; j++){
            lastptr = lastptr->next;
        }

        if(len > 0){
            for(int i=0; i<k; i++){

                ListNode* beforelastptr = head;
                
                for(int j=0; j<len-2; j++){
                    beforelastptr = beforelastptr->next;
                }

                lastptr->next = head;
                beforelastptr->next = NULL;
                head = lastptr;
                lastptr = beforelastptr;
            }
        }
        
        return head;

    }
};