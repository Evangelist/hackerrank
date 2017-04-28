/*
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;

}node;

*/


void decode_huff(node * root,string s)
{
    // start
    node* temp = root;
    int index = 0;
    while (s[index])
    {
        if (s[index] == '0')
        {
            //cout << "string[" << index << "] is " << s[index] << " -> left" << endl;
            temp = temp->left;
            if (!temp->left && !temp->right)
            {
                //cout << "string[" << index << "] is " << s[index] << " is leaf" << endl;
                cout << temp->data;// << endl;
                temp = root;
            }
            index++;
        }
        else if (s[index] == '1')
        {
            //cout << "string[" << index << "] is " << s[index] << " -> right" << endl;
            temp = temp->right;
            if (!temp->left && !temp->right)
            {
                //cout << "string[" << index << "] is " << s[index] << " is leaf" << endl;
                cout << temp->data;// << endl;
                temp = root;
            }
            index++;
        }
    }
    // end
}
