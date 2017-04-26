/*
    Insert Node in a doubly sorted linked list
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    // Complete this function
   // Do not write the main method.
    // start
    Node* new_node = new Node;
    new_node->data = data;
    if (!head)
    {
        head = new_node;
        head->prev = (Node*)NULL;
        head->next = (Node*)NULL;
        return head;
    }
    Node* temp = head;
    Node* prev = (Node*)NULL;
    while (temp)
    {
        if (data < temp->data)
        {
            new_node->prev = temp->prev;
            new_node->next = temp;
            temp->prev = new_node;
            if (prev)
                prev->next = new_node;
            //temp->next has no change...
            if (!new_node->prev)
                return new_node;
            else
                return head;
        }
        prev = temp;
        temp = temp->next;
    }
    prev->next = new_node;
    new_node->prev = prev;
    new_node->next = (Node*)NULL;
    return head;
    // end
}
