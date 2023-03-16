// The task is to complete the function detectloop() which contains reference to the head as only argument. 
// This function should return true if linked list contains loop, else return false.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 ≤ N ≤ 104
// 1 ≤ Data on Node ≤ 103


// Input:
// N = 3
// value[] = {1,3,4}
// x(position at which tail is connected) = 2
// Output: True

/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
       unordered_set<Node*> mp;

       while(head!=NULL){
    
           if(mp.find(head) != mp.end()){
               return true;
           }
           
           mp.insert(head);
           
           head=head->next;
       }
       
       return false;
    }
};
