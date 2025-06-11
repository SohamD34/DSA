// https://leetcode.com/problems/merge-in-between-linked-lists

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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {

        ListNode* curr_node1 = list1;
        a-=1;
        while(a--){
            curr_node1 = curr_node1->next;
        }

        // cout<<curr_node1->val<<endl;

        ListNode* curr_node2 = list1;
        b+=1;
        while(b--){
            curr_node2 = curr_node2->next;
        }

        // cout<<curr_node2->val<<endl;

        curr_node1->next = list2;
        
        while(curr_node1->next){
            curr_node1 = curr_node1->next;
        }

        curr_node1->next = curr_node2;

        return list1; 
    }
};