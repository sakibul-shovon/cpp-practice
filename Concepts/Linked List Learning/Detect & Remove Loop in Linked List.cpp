

bool detectLoop(Node* head){

    if(head == NULL){
        return false;
    }

    map<Node* ,bool> visited;
    Node* temp = head;

    while(temp != NULL){
        
        if(visited[temp] == true){
            return 1;
        }

        visited[temp] = true;
        temp = temp->next;

    }

    return false;
}


///2nd approch
Node* floydDetectLoop(Node* head){
    if(head == NULL){
        return false;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast-> next ;
        
        if(fast != NULL){
            fast = fast->next
        }
        slow=slow->next;
        
        if(slow == fast){
            return slow;
        }
    }
    return NULL;
}


/*/*/
Node* getStartingNode(Node* head) {

    if(head == NULL) 
        return NULL;

    Node* intersection = floydDetectLoop(head);
    
    if(intersection == NULL)
        return NULL;
    
    Node* slow = head;

    while(slow != intersection) {
        slow = slow -> next;
        intersection = intersection -> next;
    }  

    return slow;

}

Node *removeLoop(Node *head)
{
    if( head == NULL)
        return NULL;

    Node* startOfLoop = getStartingNode(head);
    
    if(startOfLoop == NULL)
        return head;
    
    Node* temp = startOfLoop;

    while(temp -> next != startOfLoop) {
        temp = temp -> next;
    } 

    temp -> next = NULL;
    return head;
}
Footer
© 2022 GitHub, Inc.
Footer navigation
Term


