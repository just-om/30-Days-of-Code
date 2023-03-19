

/*  Function which returns the  root of 
    the flattened linked list. */
 
 Node* merge(Node* head1, Node* head2){
     
     Node* ptr1=head1;
     Node* ptr2=head2;
     
    Node* ans = new Node(-1);
    Node* ptr3 = ans;
    
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->data < ptr2->data){
            ptr3->bottom=ptr1;
            ptr1=ptr1->bottom;
        }
        else{
            ptr3->bottom=ptr2;
            ptr2=ptr2->bottom;
        }
        ptr3=ptr3->bottom;
    }
    
    while(ptr1!=NULL){
        ptr3->bottom=ptr1;
        ptr1=ptr1->bottom;
        ptr3=ptr3->bottom;
    }
    
    
    while(ptr2!=NULL){
        ptr3->bottom=ptr2;
        ptr2=ptr2->bottom;
        ptr3=ptr3->bottom;
    }
    
     return ans->bottom;
 }
 
    
Node *flatten(Node *root)
{
   // Your code here
  
    Node* temp=root;
    Node* ptr1=root;
    Node* ptr2=root->next;
    
    while(temp->next!=NULL){
        ptr1=merge(ptr1,ptr2);
        temp=temp->next;
        ptr2=ptr2->next;
    }
  
  return ptr1;
   
}

