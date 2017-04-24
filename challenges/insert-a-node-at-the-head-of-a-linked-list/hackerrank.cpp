/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    // start
    if (head)
    {
        Node* new_node = new Node;
        new_node->data = data;
        new_node->next = head;
        return new_node;
    }
    else
    {
        Node* new_node = new Node;
        new_node->data = data;
        new_node->next = NULL;
        return new_node;
    }
    // end
}
