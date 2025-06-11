// https://leetcode.com/problems/reorder-list

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

    ListNode* reverseList(ListNode* head){
        ListNode* prev = nullptr;

        while (head) {
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }

    void reorderList(ListNode* head) {
        
        /*
        1       2      3       4       5
        head           slow    sos     fast       
        */

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next){

            if(fast->next->next){
                fast = fast->next->next;       // odd length
                slow = slow->next;
            }
            else{
                fast = fast->next;      // even length
            }
        }

        ListNode* start_of_second = slow->next;
        slow->next = nullptr;
        ListNode* reversedSecond = reverseList(start_of_second);

        /*
        1       2      3       
        ptr1            

        5       4
        ptr2    
        */
        ListNode* ptr1 = head;
        ListNode* ptr2 = reversedSecond;
        
        while(ptr1 && ptr2){
            ListNode* mid = ptr2;
            ptr2 = ptr2->next;
            mid->next = ptr1->next;
            ptr1->next = mid;
            ptr1 = ptr1->next->next;
        }
    }
};