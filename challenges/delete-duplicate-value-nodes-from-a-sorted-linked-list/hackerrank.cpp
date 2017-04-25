/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
  // This is a "method-only" submission.
  // You only need to complete this method.
    // start
    Node* temp = head;
    while (temp && temp->next)
    {
        if (temp->data == temp->next->data)
        {
            Node* temp1 = temp->next;
            temp->next = temp->next->next;
            delete temp1;
        }
        else
            temp = temp->next;
    }
    return head;
    // end
}
