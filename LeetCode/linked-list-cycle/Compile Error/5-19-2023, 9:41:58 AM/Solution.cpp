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
    bool hasCycle(ListNode *head) {
        
        vector<ListNode *> visited;
        bool value = false;

        while(head){
            
            vector<int> iterator loc = find(visited.begin(),visited.end(),head);

            if(visited[loc] != visited.end()){
                visited.push_back(head);
            }
            else{
                value = true;
                break;
            }
            head = head->next;
        }
        return value;
    }
};