/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method.
    // start
    int sizeA = 0, sizeB = 0, diff = 0;
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
    tempA = headA;
    tempB = headB;
    if (sizeA > sizeB)
    {
        diff = sizeA - sizeB;
        while (diff--)
        {
            tempA = tempA->next;
        }
    }
    else
    {
        diff = sizeB - sizeA;
        while (diff--)
        {
            tempB = tempB->next;
        }
    }
    while (tempA != tempB)
    {
        tempA = tempA->next;
        tempB = tempB->next;
    }
    return tempA->data;
    // end
}
