// The task is to complete the function intersection() which should find the intersection of two linked list and 
// add all the elements in intersection to the third linked list and return the head of the third linked list.

// Expected Time Complexity : O(n+m)
// Expected Auxilliary Space : O(n+m)
// Note: n,m are the size of the linked lists.

// Constraints:
// 1 <= size of linked lists <= 5000
// 1 <= Data in linked list nodes <= 1000


/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    // unordered_set<int> mp;
    // unordered_set<int> mo;
   

    // Node *curr1=head1;
    // Node *curr2=head2;
    // Node* temp = new Node(0);
    // Node *res=temp; 
    // while(curr1!=NULL){
    //     mp.insert(curr1->data);
    //     curr1=curr1->next;
    // }
    
    // while(curr2!=NULL){
        
    //     if( (mp.find(curr2->data)!=mp.end()) && (mo.find(curr2->data)==mo.end())  ) {
    //         temp->next=curr2;
    //         temp=temp->next;
            
    //     }
    //     mo.insert(curr2->data);
    //     curr2=curr2->next;
        
    // }


    // temp->next=NULL;
    
    // return res->next;
    
    Node* temp = new Node(-1) ;
    Node* newHead = temp;
    
    while(head1!=NULL && head2!=NULL) {
        if(head1->data == head2->data) {
            temp->next = head1 ;
            temp = temp->next ;
            head1 = head1->next ;
            head2 = head2->next ;
            temp->next = NULL;
        }
        else if (head1->data > head2->data) {
            head2 = head2->next ;
        }
        else {
            head1 = head1->next ;
        }
    }
    return newHead->next ;
    
}
