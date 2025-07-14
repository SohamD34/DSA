#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* getLLfromVector(vector<int>& v){

    ListNode* head = new ListNode(v[0]);
    ListNode* curr = head;
    for(int i=1; i<v.size(); i++){
        ListNode* node = new ListNode(v[i]);
        curr->next = node;
        curr = node;
    }
    curr->next = nullptr;
    return head;
}

void printList(ListNode *head){
    ListNode *temp = head;
    while(temp != NULL){
        cout << temp->val << ' ';
        temp = temp->next;
    }
    cout << endl;
}


int getLength(ListNode* head){
    int len = 0;
    ListNode* curr = head;
    while(curr){
        len++;
        curr = curr->next;
    }
    return len;
}

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    
    int n1 = getLength(headA);
    int n2 = getLength(headB);
    int diff = 0;

    if(n1>n2){
        diff = n1 - n2;
        while(diff--){
            headA = headA->next;
        }
    }
    else{
        diff = n2 - n1;
        while(diff--){
            headB = headB->next;
        }
    }

    while(headA && headB && headA != headB){
        headA = headA->next;
        headB = headB->next;
    }

    if(headA && headB){
        return headA;
    }
    return nullptr;
}


int main(){

    vector<int> A = {4,1,8,4,5};
    ListNode* headA = getLLfromVector(A);    
    vector<int> B = {5,6,1,8,4,5};
    ListNode* headB = getLLfromVector(B);
    ListNode* junction = getIntersectionNode(headA, headB);
    cout<<junction->val<<endl;



    return 0;
}