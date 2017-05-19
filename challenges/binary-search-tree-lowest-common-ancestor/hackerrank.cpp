/*
Node is defined as

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * lca(node * root, int v1,int v2)
{
    // start
    if (!root) return root;
    if (v1 < root->data && v2 < root->data && root->left)
        return lca(root->left, v1, v2);
    else if (v1 > root->data && v2 > root->data && root->right)
        return lca(root->right, v1, v2);
    return root;
    // end
}