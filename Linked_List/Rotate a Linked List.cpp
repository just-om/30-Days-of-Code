
class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        Node* tail=head;
        Node* curr=head;
        int c=1;
        
        while(tail->next!=NULL){
            tail=tail->next;
            c++;
        }
        
        if(k>c){
            k=k%c;
        }
        if(k==0) return head;
        
        for(int i=0;i<k-1;i++){
            curr=curr->next;
        }
        
        tail->next=head;
        head=curr->next;
        curr->next=NULL;
        
        
        return head;
    }
};
    
