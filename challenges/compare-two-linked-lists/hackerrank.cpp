/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not.
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission.
  // You only need to complete this method
    // start
    int sizeA = 0, sizeB = 0;
    Node* tempA = headA;
    Node* tempB = headB;
    while (tempA)
    {
        sizeA++;
        tempA = tempA->next;
    }
    while (tempB)
    {
        sizeB++;
        tempB = tempB->next;
    }
    if (sizeA != sizeB)
        return 0;
    if (sizeA == 0)
        return 1;
    tempA = headA;
    tempB = headB;
    while (tempA && tempB)
    {
        if (tempA->data != tempB->data)
            return 0;
        tempA = tempA->next;
        tempB = tempB->next;
    }
    return 1;
    // end
}
