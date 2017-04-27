/*
Node is defined as

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert(node * root, int value)
{
    // start
    if (!root)
    {
        root = new node;
        root->data = value;
        root->left = (node*)NULL;
        root->right = (node*)NULL;
        return root;
    }
    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);
    // end
   return root;
}
