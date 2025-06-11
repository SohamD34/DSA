// https://leetcode.com/problems/linked-list-cycle-ii

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
    ListNode *detectCycle(ListNode *head) {
        
        unordered_set<ListNode*> explored;
        ListNode* ptr = head;

        while(ptr){
            if(explored.find(ptr) != explored.end()){
                return ptr;
            }
            explored.insert(ptr);
            ptr = ptr->next;
        }

        return ptr;
    }
};