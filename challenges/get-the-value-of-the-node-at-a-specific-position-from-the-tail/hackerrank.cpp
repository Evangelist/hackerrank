/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
  // This is a "method-only" submission.
  // You only need to complete this method.
    // start
    int size = 0;
    Node* temp = head;
    while (temp)
    {
        size++;
        temp = temp->next;
    }
    temp = head;
    int index = size - positionFromTail - 1;
    while (index--)
    {
        temp = temp->next;
    }
    return temp->data;
    // end
}
