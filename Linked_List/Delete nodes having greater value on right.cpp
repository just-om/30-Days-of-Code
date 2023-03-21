
Node* reverse(Node* head){
    Node* curr=head;
    Node* prev=NULL,*next=NULL;
    
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    
    return prev;
}

class Solution
{
    public:
    Node *compute(Node *head)
    {
        // your code goes here
        
        //Reverse Whole
        head=reverse(head);
        
        
        Node* curr=head;
        Node* prev=head;
        
        int max=head->data;
        head=head->next;
        
        
        while(head!=NULL){
            if(head->data>=max){
                max=head->data;
                prev=head;
                head=head->next;
            }
            else{
                prev->next=head->next;
                head=prev->next;
            }
        }
        
        head=reverse(curr);
        
        return head;
    }
    
};
