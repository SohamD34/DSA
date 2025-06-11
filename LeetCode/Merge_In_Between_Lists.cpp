#include <iostream>
#include <stdlib.h>
using namespace std;


/* MERGE IN BETWEEN LISTS

You are given two linked lists: list1 and list2 of sizes n and m respectively.
Remove list1's nodes from the ath node to the bth node, and put list2 in their place.

The blue edges and nodes in the following figure indicate the result:
Build the result list and return its head.

Input: list1 = [10,1,13,6,9,5], a = 3, b = 4, list2 = [1000000,1000001,1000002]
Output: [10,1,13,1000000,1000001,1000002,5]
*/

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        int c = b-a+2;

        ListNode* curr_node1 = list1;
        a-=1;
        while(a--){
            curr_node1 = curr_node1->next;
        }

        ListNode* curr_node2 = curr_node1;
        while(c--){
            curr_node2 = curr_node2->next;
        }

        curr_node1->next = list2;
        while(curr_node1->next){
            curr_node1 = curr_node1->next;
        }
        curr_node1->next = curr_node2;

        return list1; 
    }