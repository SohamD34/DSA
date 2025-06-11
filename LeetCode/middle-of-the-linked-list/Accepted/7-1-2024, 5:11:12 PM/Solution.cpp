// https://leetcode.com/problems/middle-of-the-linked-list

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
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    ListNode* middleNode(ListNode* head) {

        ListNode* fast = head;
        ListNode* slow = head;

        while(fast->next){
            fast = fast->next;
            if(fast->next){
                fast = fast->next;
            }

            slow = slow->next;
        }
        
        return slow;
    }
};