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

        vector<int> arr;
        ListNode* start = list1;

        while(list1!=NULL){
            arr.push_back(list1->val);
            if(list1->next == NULL){
                list1->next = list2;
            }
            list1 = list1->next;
        }

        while(list2!=NULL){
            arr.push_back(list2->val);
            list2 = list2->next;
        }

        sort(arr.begin(), arr.end());

        ListNode* final = start;

        int i=0;
        while(final!=NULL){
            final->val = arr[i];
            i+=1;
        }

        return start;
    }
};