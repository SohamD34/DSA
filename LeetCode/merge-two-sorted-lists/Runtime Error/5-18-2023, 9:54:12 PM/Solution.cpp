// https://leetcode.com/problems/merge-two-sorted-lists

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* finalptr;

        if(list1->val > list2->val){
            finalptr = list2;
        }
        else{
            finalptr = list1;
        }

        ListNode* currptr = finalptr;
        ListNode* ptr1 = list1->next;
        ListNode* ptr2 = list2;

        while(currptr!=NULL || ptr1!=NULL || ptr2!=NULL){

            if(ptr1!=NULL && ptr2!=NULL){
                if(ptr1->val <= ptr2->val){
                    currptr->next = ptr1;
                    ptr1 = ptr1->next;
                }
                else{
                    currptr->next = ptr2;
                    ptr2 = ptr2->next;
                }
                currptr = currptr->next;
            }
            else{
                if(ptr1==NULL){
                    currptr->next = ptr2;
                    break;
                }
                else{
                    currptr->next = ptr1;
                }
            }
        }

        return finalptr;
    }
};