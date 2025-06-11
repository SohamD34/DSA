// https://leetcode.com/problems/linked-list-cycle

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
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    bool hasCycle(ListNode *head) {
        
        unordered_map <ListNode*,int> Map;

        while(head){
            Map[head]++;

            if(Map[head] > 1){
                return true;
            }

            head = head->next;
        }
        return false;
    }
};