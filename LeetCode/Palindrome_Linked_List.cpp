#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* findMiddleNode(ListNode* head){
    ListNode* fast = head;
    ListNode* slow = head;

    while(fast->next){
        fast = fast->next;
        if(fast->next){
            fast = fast->next;
        }
        slow = slow->next;
    }

    return slow;
}

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

bool isPalindrome(ListNode* head) {

    ListNode* mid = findMiddleNode(head);
    ListNode* reversed = reverseList(mid);

    while(reversed){
        if(reversed->val != head->val){
            return false;
        }
        reversed = reversed->next;
        head = head->next;
    }
    return true;
}

int main(){

    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(2);
    head->next->next->next->next = new ListNode(1);

    cout<<isPalindrome(head)<<endl;
 
    return 0;
}