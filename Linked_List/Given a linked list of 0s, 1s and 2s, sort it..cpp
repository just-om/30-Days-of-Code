// The task is to complete the function segregate() which segregates the nodes in the linked list as asked in the problem statement and returns the head of the modified linked list. The printing is done automatically by the driver code.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(N).

// Constraints:
// 1 <= N <= 103


class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        Node* curr=head;
       
        Node* curr2=head;
        
        int c2=0,c1=0,c0=0;
        while(curr!=NULL){
            if(curr->data==0){
                c0++;
            }
            else if(curr->data==1){
                c1++;
            }
            else if(curr->data==2){
                c2++;
            }
            
            curr=curr->next;
        }
        
        while(c0--){
            curr2->data=0;
            curr2=curr2->next;
        }
        while(c1--){
            curr2->data=1;
            curr2=curr2->next;
        }
        while(c2--){
            curr2->data=2;
            curr2=curr2->next;
        }
        
        return head;
 
    }
    
};
