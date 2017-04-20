/*
  Insert Node at the end of a linked list
  head pointer input could be NULL as well for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    // start
    if (head)
    {
        Node* temp = head;
        while (temp->next) temp = temp->next;
        Node* new_node = (Node*) new Node;
        new_node->data = data;
        new_node->next = (Node*)NULL;
        temp->next = new_node;
        return head;
    }
    else
    {
        head = (Node*) new Node;
        head->data = data;
        head->next = NULL;
        return head;
    }
    // end
}
