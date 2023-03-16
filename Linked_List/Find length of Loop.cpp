The task is to complete the function countNodesinLoop() which contains the only argument as reference to head of linked list and
return the length of the loop ( 0 if there is no loop).

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 500
0 <= C <= N-1


/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

int countNodes(struct Node *n)
{
    int c = 1;
   struct Node* temp = n;
    while (temp->next != n) {
        c++;
        temp = temp->next;
    }
    return c;
}


//Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
    
    struct Node *first=head, *last=head;

    
    while(first && last && last->next){
        first=first->next;
        last=last->next->next;
        
        if(first==last){
            return countNodes(first);
        }
    
    }

    return 0;
}
