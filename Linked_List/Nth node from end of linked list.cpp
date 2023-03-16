// The task is to complete the function getNthFromLast() which takes two arguments: 
// reference to head and N and you need to return Nth from the end or -1 in case node doesn't exist.

// Note:
// Try to solve in a single traversal.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 <= L <= 106
// 1 <= N <= 106

// Input:
// N = 2
// LinkedList: 1->2->3->4->5->6->7->8->9
// Output: 8


/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/


//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
       // Your code here
       int c=1;
       
       Node *curr=head;
    Node *prev=NULL, *next=NULL;
    
    while(curr!=NULL){
        
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
       
       
       while(head!=NULL){
               if(c==n){
               return int(head->data);
           }
           c++;
           head=head->next;
           
       }
       
       return -1;
       
       
}

