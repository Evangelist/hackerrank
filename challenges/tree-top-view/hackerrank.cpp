/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void top_view(node * root)
{
    // start
    if (!root) return;
    static node* temp = root;
    static bool passedroot = false;
    if (!passedroot)
        top_view(root->left);
    if (temp == root)
        passedroot = true;
    cout << root->data << ' ';
    if (passedroot)
        top_view(root->right);
    // end
}
