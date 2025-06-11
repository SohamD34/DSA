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

        int val1 = 0;
        int power = 0; 
        int len1 = 0;
        ListNode* ptr1 = l1;
        while(ptr1){
            len1 += 1;
            val1 = val1 + (ptr1->val)*(pow(10,power));
            power += 1; 
            ptr1 = ptr1->next;
        }

        int val2 = 0;
        power = 0; 
        int len2 = 0;
        ListNode* ptr2 = l2;
        while(ptr2){
            len2 += 1;
            val2 = val2 + (ptr2->val)*(pow(10,power));
            power += 1; 
            ptr2 = ptr2->next;
        }
        
        int ans = val1 + val2;
        
        ListNode* currptr = (len1>len2)?l1:l2;
        ListNode* ansptr = currptr;

        while(currptr != NULL){
            int num = ans%10;
            currptr->val = num;
            ans = ans/10;
            currptr = currptr->next;
        }

        currptr = (len1>len2)?l1:l2;

        for(int i=0; i<len1-1; i++){
            currptr = currptr->next;
        }

        if(ans!=0){
            ListNode* carrynode = new(ListNode);
            currptr->next = carrynode;
            carrynode->val = ans;
        }

        return ansptr;
    }
};