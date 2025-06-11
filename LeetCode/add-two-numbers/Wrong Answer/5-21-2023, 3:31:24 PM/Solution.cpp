// https://leetcode.com/problems/add-two-numbers


//  Definition for singly-linked list.
// struct ListNode{
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        
        ListNode* ptr1 = l1;
        ListNode* ptr2 = l2;

        int sum = 0;
        int sum_dig = 0;
        int carry_in  = 0;

        ListNode* prev;

        while(ptr1 != NULL || ptr2 != NULL){
            
            if (ptr1 == NULL){
                prev->next = ptr2;
                break;
            }
            else if(ptr2 == NULL){
                ptr1 = prev->next;
                break;
            }
            int digit1 = ptr1->val;
            int digit2 = ptr2->val;

            sum = digit1 + digit2 + carry_in;

            if(sum >= 10){
                sum_dig = sum - 10;
                carry_in = 1;
            }
            else{
                sum_dig = sum;
                carry_in = 0;
            }

            ptr1->val = sum_dig;
            prev = ptr1;
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }

        ListNode* ptr_prev;

        if(carry_in == 1){
            ListNode* ptr = prev->next;
            while(ptr!=NULL){
                int sum = ptr->val + carry_in;
                if(sum >= 10){
                    ptr->val = sum - 10;
                    carry_in = 1;
                }
                else{
                    ptr->val = sum;
                    carry_in = 0;
                }
                ptr_prev = ptr;
                ptr = ptr->next;
            }
        }

        if(carry_in == 1){
            ListNode* finalNode = new ListNode;
            finalNode = ptr_prev;
            finalNode->val = 1;
        }

        return l1;
    
    }
};