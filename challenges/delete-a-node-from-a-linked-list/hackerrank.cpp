/*
  Delete Node at a given position in a linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    // start
    if (head)
    {
        if (position)
        {
            position--;
            Node* temp = head;
            while (position--) temp = temp->next;
            Node* temp1 = temp->next;
            temp->next = temp->next->next;
            delete temp1;
            return head;
        }
        else
        {
            Node* temp = head->next;
            delete head;
            return temp;
        }
    }
    else
    {
        return (Node*)NULL;
    }
    // end
}
