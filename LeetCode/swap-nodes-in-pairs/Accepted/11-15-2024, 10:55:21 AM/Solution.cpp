// https://leetcode.com/problems/swap-nodes-in-pairs

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
    ListNode* swapPairs(ListNode* head) {
        
        if(!head or !head->next){
            return head;
        }

        ListNode* start = head->next; 

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        //       ,-----------.
        // 0     1 <-- 2     3 --> 4
        // p     c     f
        // '-----------'

        // p ----> f ----> c -----> 3 -----> 4
        // 0 ----> 2 ----> 1 -----> 3 -----> 4
        //                 p        c        

        ListNode* prev = dummy;
        ListNode* curr = head;
        ListNode* front = head->next;

        while(curr && front){
            prev->next = front;
            curr->next = front->next;
            front->next = curr;
            
            prev = curr;
            curr = curr->next;
            if(curr && curr->next){
                front = curr->next;
            }
            else{
                break;
            }
        }

        return start;
    }
};