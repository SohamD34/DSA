// https://leetcode.com/problems/partition-list

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    ListNode* partition(ListNode* head, int x) {
        
        ListNode* small = new ListNode(-1);
        ListNode* large = new ListNode(-1);
        ListNode* small_head = small;
        ListNode* large_head = large;
        
        while (head){
            if (head->val < x){
                small->next = head;
                small = small -> next;
                head = head -> next;
                small->next = NULL;
            }
            else{
                large->next = head;
                large = large -> next;
                head = head -> next;
                large -> next = NULL;
            }
        }
        small -> next = large_head -> next;

        return small_head -> next;
    }
};