Node* reverseDLL(Node * head)
{
    Node *curr=head, *temp=NULL; 
 
    while(curr!=NULL){
        temp=curr->prev;
        curr->prev=curr->next;
        curr->next=temp;
        curr=curr->prev;
    }

if (temp != NULL) {
        head = temp->prev;
    }
    return head;
    
}
