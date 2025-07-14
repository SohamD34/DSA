#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int getDecimalValue(ListNode* head) {
    
    int value = 0;
    ListNode* curr = head;

    while(curr){
        value = value*2;
        value += curr->val;
        curr = curr->next;
    }
    return value;
}

void printList(ListNode *head){
    ListNode *temp = head;
    while(temp != NULL){
        cout << temp->val << ' ';
        temp = temp->next;
    }
    cout << endl;
}


int main(){
    vector<int> num = {1,0,1};
    ListNode* head = new ListNode(num[0]);
    ListNode* curr = head;
    for(int i=1; i<num.size(); i++){
        ListNode* node = new ListNode(num[i]);
        curr->next = node;
        curr = node;
    }
    curr->next = nullptr;

    cout << getDecimalValue(head) << endl;
}