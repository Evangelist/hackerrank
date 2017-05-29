/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.

The Node struct is defined as follows:
struct Node {
    int data;
    Node* left;
    Node* right;
}
*/

// start
void checkBST2(vector<int>& tree, Node* temp)
{
    if (!temp) return;
    checkBST2(tree, temp->left);
    tree.push_back(temp->data);
    checkBST2(tree, temp->right);
}
// end

bool checkBST(Node* root) {
    // start
    vector<int> tree;
    if (!root) return true;
    Node* temp = root;
    checkBST2(tree, temp);
    if (tree.size() == 1 ) return true;
    for (int i = 1; i < tree.size(); i++)
    {
        if (tree[i - 1] >= tree[i]) return false;
    }
    return true;
    // end
}
