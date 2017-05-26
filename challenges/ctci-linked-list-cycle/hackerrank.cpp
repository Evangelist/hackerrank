/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as:
    struct Node {
        int data;
        struct Node* next;
    }
*/

// start
#include <map>
// end

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    // start
    if (!head) return false;
    Node* temp = head;
    map<Node*, bool> cycle;
    while (temp)
    {
        if (cycle[temp])
            return true;
        cycle[temp] = true;
        temp = temp->next;
    }
    return false;
    // end
}
