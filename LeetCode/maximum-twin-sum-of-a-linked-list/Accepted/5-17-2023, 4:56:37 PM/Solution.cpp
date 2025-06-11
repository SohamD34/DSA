// https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list

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
    int pairSum(ListNode* head) {
        int max_sum = 0;
        ListNode* ptr = head;
        
        vector<int> arr;

        while(ptr != NULL){
            arr.push_back(ptr->val);
            ptr = ptr->next;
        }

        for(int i=0;i<arr.size()/2;i++){
            if ((arr[i] + arr[arr.size()-i-1]) > max_sum){
                max_sum = arr[i] + arr[arr.size()-i-1];
            }
        }

        return max_sum;
    }
};