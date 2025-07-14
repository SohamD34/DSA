#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* removeElements(ListNode* head, int val) {

    while(head != nullptr && head->val == val){
        head = head->next;
    }
    ListNode* current = head;
    while(current != nullptr && current->next != nullptr){
        if(current->next->val == val){
            current->next = current->next->next;
        } 
        else {
            current = current->next;
        }
    }
    return head;
}

int main(){
    
    vector<int> nums = {};
    ListNode* head = nullptr; // new ListNode(nums[0]);
    ListNode* current = head;
    for (int i = 1; i < nums.size(); i++) {
        current->next = new ListNode(nums[i]);
        current = current->next;
    }
    current->next = nullptr;

    int val = 6;
    ListNode* result = removeElements(head, val);

    // Print the result
    while (result != nullptr) {
        cout << result->val << " ";
        result = result->next;
    }
    cout << endl;

    return 0;
}