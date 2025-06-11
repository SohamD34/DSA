// https://leetcode.com/problems/delete-node-in-a-linked-list

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
    void deleteNode(ListNode* node) {
        
        vector<int> future_values;

        ListNode* ptr = node->next;
        while(ptr){
            future_values.push_back(ptr->val);
            ptr = ptr->next;
        }

        ptr = node;
        
        int index = 0;

        while(ptr->next){
            ptr->val = future_values[index];
            index++;
            if(index == future_values.size()){
                break;
            }
            ptr = ptr->next;
        }
        ptr->next = nullptr;
    }
};