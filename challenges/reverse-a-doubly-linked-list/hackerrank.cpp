/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head)
{
    // Complete this function
    // Do not write the main method.
    // start
    if (!head) return head;
    Node* temp = head;
    Node* prev = (Node*)NULL;
    Node* next = (Node*)NULL;
    while (1)
    {
        prev = temp->prev;
        next = temp->next;
        temp->prev = next;
        temp->next = prev;
        if (!next)
        {
            break;
        }
        temp = next;
    }
    return temp;
    // end
}
