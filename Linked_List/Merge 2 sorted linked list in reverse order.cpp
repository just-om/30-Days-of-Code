
struct Node * mergeResult(Node *node1,Node *node2)
{
    // your code goes here
   if(node1 == NULL)
        return node2;
    
    if(node2 == NULL)
        return node1;
    
    Node* ans = new Node;
    Node* temp = ans;
    
    //merge 2 sorted Linked List
    while(node1 != NULL && node2 != NULL) {
        if(node1 -> data < node2 -> data ) {
            temp -> next = node1;
            temp = node1;
            node1 = node1 -> next;
        }
        else
        {
            temp -> next = node2;
            temp = node2;
            node2 = node2 -> next;
        }
    }
    
    while(node1 != NULL) {
        temp -> next = node1;
        temp = node1;
        node1 = node1 -> next;
    }
    
    while(node2 != NULL) {
        temp -> next = node2;
        temp = node2;
        node2 = node2 -> next;
    }
    
    Node* current = ans->next;
        Node *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            // Store next
            next = current->next;
            // Reverse current node's pointer
            current->next = prev;
            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
        ans = prev;
        
        return ans;
    
    
}
