
class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        unordered_set<int> mp;
        
        Node *curr=head;
        Node *temp=NULL;
        
        while(curr!=NULL){
            
            if(mp.find(curr->data)!=mp.end()){
                temp->next=curr->next;
                free(curr);
            }
            else{
                mp.insert(curr->data);
                temp=curr;
            }
            curr=temp->next;
            
        }
        return head;
    }
};
