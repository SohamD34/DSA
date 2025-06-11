// https://leetcode.com/problems/palindrome-linked-list

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
    bool isPalindrome(ListNode* head) {
        
        vector<int> forward;
        while(head){
            forward.push_back(head->val);
            head = head->next;
        }

        int front = 0;
        int back = forward.size()-1;
        bool value = true;

        while(back>front){
            if(forward[front] != forward[back]){
                value = false;
                break;
            }
            front+=1;
            back-=1;
        }
        return value;
    }
};