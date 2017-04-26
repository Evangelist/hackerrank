/* you only have to complete the function given below.
Node is defined as

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void preOrder(node *root) {
    // start
    if (!root)
        return;
    cout << root->data << ' ';
    if (root->left)
        preOrder(root->left);
    if (root->right)
        preOrder(root->right);
    // end
}
