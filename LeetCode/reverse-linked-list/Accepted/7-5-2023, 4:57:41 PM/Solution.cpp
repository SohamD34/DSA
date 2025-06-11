// https://leetcode.com/problems/reverse-linked-list

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
    ListNode* reverseList(ListNode* head) {
        
        ListNode * ptr = head;
        vector<int> values;

        while(ptr){
            values.push_back(ptr->val);
            ptr = ptr->next;
        }
        
        int i = values.size()-1;
        ptr = head;

        while(i>=0){
            ptr->val = values[i];
            ptr = ptr->next;
            i--;
        }
        return head;
    }
};