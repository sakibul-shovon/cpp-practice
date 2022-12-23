// File Name: test.cpp
// Date: 2022-12-22
// Time: 05:34:32

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next=NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<< "Memory is free for node with data : "<<value<<endl;
    }
};

void insertNode(Node* &tail , int element ,int d){
    //assuming that the element is present in the list

    //empty node
    if(tail == NULL){
        Node* newNode= new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }

    //Not empty
    else{
         //assuming that the element is present in the list
         Node* curr = tail;
         while(curr->data != element){
            curr = curr->next;
         }

         Node* temp = new Node(d);
         temp->next = curr->next;
         curr->next=temp;
    }
}

void print(Node* &tail){
    Node* temp = tail;

    //empty list
    if(tail == NULL){
        cout<< "List is empty"<<endl ;
        return ;
    }
    
    do {
        cout<<tail->data<<" ";
        tail =tail->next;
    } while(tail != temp);
    cout<<endl;
}

void deleteNode(Node* &tail, int value){
    //empty list
    if(tail == NULL){
        cout<<"LIST IS EMPTY "<<endl;
    }

    else{
        //value is present in linked list
        Node* prev = tail;
        Node* curr =prev->next;
        while(curr->data != value){
            prev = curr;
            curr = curr->next;

        }

        prev->next = curr->next;

        // if(tail == curr){
        //     tail = prev;
        // }
        curr->next = NULL;
        delete curr;

    }
}


int main(){

    Node* tail= NULL;

    //inserting in empty next
    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail , 3, 5);
    print(tail);

    insertNode(tail, 5 ,7 );
    print(tail);

    insertNode(tail ,5 , 6);
    print(tail);

    deleteNode(tail ,6);
    print(tail);
    
    
    return 0;
}
