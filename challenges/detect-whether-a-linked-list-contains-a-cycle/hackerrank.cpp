/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as:
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    // start
    int size = 100;
    Node* temp = head;
    while (size--)
    {
        if (temp)
        {
            temp = temp->next;
        }
        else
            return false;
    }
    return true;
    // end
}
