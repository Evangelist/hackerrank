/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.

The Node struct is defined as follows:
struct Node {
    int data;
    Node* left;
    Node* right;
}
*/
bool checkBST(Node* root) {
    // start
    static Node* prev = 0;
    static bool ret = true;
    if (!root)
        return true;
    checkBST(root->left);
    //if (prev)
    //    cout << prev->data << ' ' << root->data << endl;
    if (prev && prev->data >= root->data)
    {
        ret = false;
    }
    prev = root;
    checkBST(root->right);
    return ret;
    // end
}
