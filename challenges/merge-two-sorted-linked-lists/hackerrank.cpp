/*
  Merge two sorted lists A and B as one linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission.
  // You only need to complete this method
    // start
    if (!headA)
        return headB;
    if (!headB)
        return headA;
    Node* headN;
    Node* tempN;
    if (headA->data < headB->data)
    {
        headN = headA;
        headA = headA->next;
    }
    else
    {
        headN = headB;
        headB = headB->next;
    }
    tempN = headN;
    while (headA && headB)
    {
        if (headA->data < headB->data)
        {
            tempN->next = headA;
            tempN = tempN->next;
            headA = headA->next;
        }
        else
        {
            tempN->next = headB;
            tempN = tempN->next;
            headB = headB->next;
        }
    }
    if (!headA && headB)
    {
        tempN->next = headB;
    }
    if (headA && !headB)
    {
        tempN->next = headA;
    }

    return headN;
    // end
}
