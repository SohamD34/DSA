#include<iostream>
using namespace std;

ListNode* reverseList(ListNode* head) {

    if(!head || !head->next){
        return head;
    }
    else{
        ListNode* reversed_part = reverseList(head->next);
        ListNode* prev = NULL;
        head->next->next = head;
        head->next = prev;
        return reversed_part;
    }
    
}

ListNode* reverseList(ListNode* head) {

    ListNode * ptr = head;
    vector<int> values;
    while(ptr){
        values.push_back(ptr->val);
        ptr = ptr->next;
    }
    
    int i = values.size()-1;
    ptr = head;
    while(i>=0){
        ptr->val = values[i];
        ptr = ptr->next;
        i--;
    }
    return head;

}