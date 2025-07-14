#include <bits/stdc++.h>
using namespace std;
// #define INT_MAX 2147483647
// #define INT_MIN -2147483647

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

void printList(ListNode *head){
    ListNode *temp = head;
    while(temp != NULL){
        cout << temp->val << ' ';
        temp = temp->next;
    }
    cout << endl;
}


class MyHashSet {
private:
    ListNode* head;
public:
    MyHashSet() {
        head = new ListNode(INT_MIN);
    }

    void print(){
        cout<<"Set - ";
        printList(head);
    }
    
    void add(int key) {
        ListNode* curr = head;
        while (curr->next != nullptr) {
            if (curr->next->val == key) return; // already exists
            curr = curr->next;
        }
        curr->next = new ListNode(key);
        print();
    }
    
    void remove(int key) {
        ListNode* curr = head;
        while (curr->next != nullptr) {
            if (curr->next->val == key) {
                    ListNode* toDelete = curr->next;
                    curr->next = curr->next->next;
                    delete toDelete;
                    return;
            }
            curr = curr->next;
        }
        print();
    }
    
    bool contains(int key) {
        ListNode* curr = head->next;
        while (curr != nullptr) {
            if (curr->val == key) return true;
            curr = curr->next;
        }
        return false;
    }
};


int main(){

    MyHashSet myHashSet;
    myHashSet.add(1);      // set = [1]
    myHashSet.add(2);      // set = [1, 2]
    cout<<myHashSet.contains(1)<<endl; // return True
    cout<<myHashSet.contains(3)<<endl; // return False, (not found)
    myHashSet.add(2);      // set = [1, 2]
    cout<<myHashSet.contains(2)<<endl; // return True
    myHashSet.remove(2);   // set = [1]
    cout<<myHashSet.contains(2)<<endl; // return False, (already removed)

    return  0;
}