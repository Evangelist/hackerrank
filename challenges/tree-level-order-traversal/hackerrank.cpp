
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

// start
#include <queue>
// end

void LevelOrder(node * root)
{
    // start
    queue<node*> q;
    q.push(root);
    while (!q.empty())
    {
        node* n = (node*)q.front();
        q.pop();
        cout << n->data << ' ';
        if (n->left) q.push(n->left);
        if (n->right) q.push(n->right);
    }
    // end
}
