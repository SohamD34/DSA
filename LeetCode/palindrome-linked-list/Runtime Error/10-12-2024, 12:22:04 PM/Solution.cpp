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
    bool even_length = false;

    ListNode* getmid(ListNode* head){

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        if(fast->next){
            slow = slow->next;
            even_length = true;
        }

        return slow;
    } 

    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        if(head ==  NULL){
            return head;
        }
        while(curr != NULL){
            ListNode* temp = curr;
            ListNode* rest = curr->next;
            curr->next = prev;
            curr = rest;
            prev = temp;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {

        ListNode* slow = getmid(head);
        
        // slow pointer is where we have to start the second part
        // so we split the linked list into 2 parts

        ListNode* first = head;
        ListNode* second = slow;
        
        if(!even_length){
            second = slow->next;
        }
        
        ListNode* ptr = first;
        while((ptr->next != second && even_length) or (ptr->next->next != second && !even_length)){
            ptr = ptr->next;       
        }
        ptr->next = NULL;

        // Now that we have split the linked lists - we need to reverse the second_list;

        ListNode* reversed_second = reverseList(second);

        // now check element wise if all are same - if not -- return false

        while(first && reversed_second){
            if(first->val == reversed_second->val){
                first = first->next;
                reversed_second = reversed_second->next;
            }
            else{
                return false;
            }
        }

        return true;
    }
};