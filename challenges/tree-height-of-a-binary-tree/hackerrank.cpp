#include <iostream>
#include <cstddef>

using namespace std;

class Node{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    Node* insert(Node* root, int data) {
        if(root == NULL) {
            return new Node(data);
        }
        else {
            Node* cur;
            if(data <= root->data){
                cur = insert(root->left, data);
                root->left = cur;
            }
            else{
                cur = insert(root->right, data);
                root->right = cur;
            }

            return root;
        }
    }


    /*The tree node has data, left child and right child
    class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        // Write your code here.
        // start
        static int value = -1;
        static int max_value = -1;
        if (!root)
            return 0;
        value++;
        if (value > max_value)
            max_value = value;
        //cout << value << ' ';
        if (root->left)
        {
            value = height(root->left);
        }
        if (root->right)
        {
            value = height(root->right);
        }
        value--;
        if (value < 0)
            return max_value;
        else
            return value;
        // end
    }
}; //End of Solution

int main() {
    Solution myTree;
    Node* root = NULL;
    int t;
    int data;

    cin >> t;

    while(t-- > 0){
        cin >> data;
        root = myTree.insert(root, data);
    }
    int height = myTree.height(root);
    cout << height;

    return 0;
}
