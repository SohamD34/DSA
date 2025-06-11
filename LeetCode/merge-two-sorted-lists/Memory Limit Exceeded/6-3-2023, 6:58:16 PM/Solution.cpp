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
        
        ListNode* ptr = list1;
        ListNode* checkptr = list2;

        vector<int> nums;

        while(ptr){
            nums.push_back(ptr->val);
        }
        while(checkptr){
            nums.push_back(checkptr->val);
        }

        sort(nums.begin(), nums.end());
        int index = 0;

        ListNode* join = list1;

        while(join->next){
            join->val = nums[index];
            index++;
            join = join->next;
        }
        join->next = list2;
        

        return list1;
    }
};