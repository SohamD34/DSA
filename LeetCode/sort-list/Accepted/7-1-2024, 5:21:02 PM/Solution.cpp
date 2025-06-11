// https://leetcode.com/problems/sort-list

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
    ListNode* sortList(ListNode* head) {
        vector<int> vec;
        ListNode* curr = head;

        while(curr){
            vec.push_back(curr->val);
            curr = curr->next;
        }

        sort(vec.begin(),vec.end());

        curr = head;
        int i = 0;
        while(curr){
            curr->val = vec[i];
            curr = curr->next;
            i = i+1;
        }

        return head;
    }
};