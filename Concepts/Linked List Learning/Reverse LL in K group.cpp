//https://www.codingninjas.com/codestudio/problems/reverse-list-in-k-groups_983644?leftPanelTab=1
#include <bits/stdc++.h> 
/****************************************************************
    Following is the Linked List node structure

    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/


Node* kReverse(Node* head, int k) {

    //base case
    if(head == NULL){
        return NULL;
    }

    //step1 reverse 1st node
    Node* next  = NULL;
    Node* curr = head ;
    Node* prev = NULL;
    int count = 0;

    while(curr != NULL && count < k){
        next = curr->next;
        curr->next = prev;
        prev = curr ;
        curr = next ;
        count++;
    }

    //step 2 recursion
    if(next != NULL){
        head->next = kReverse(next,k);

    }

    return prev ;

}


//2nd approch
//--*-*-*-*-*-*-*-*-*-**-**-
Node* reverse k(Node* &head , ink k){
    Node* prevptr=NULL:
    Node* currptr = head;
    Node* nextprt;

    int count = 0;

    while(curr != NULL && count < k){
        nextptr = currptr->next;
        currptr->next=prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    if(nextptr != NULL){
        head->next = reversek(nextprt,k);

    }

    return prevptr;
    
}