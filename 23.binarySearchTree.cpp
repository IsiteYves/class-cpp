#include <iostream>
using namespace std;
#define COUNT 10

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
class BinaryTree
{
public:
    Node *root;
    BinaryTree()
    {
        this->root = NULL;
    }
    Node *add_node(Node *current, int value)
    {
        if (current == NULL)
            current = new Node(value);
        else
        {
            if (value < current->data)
                current->left = add_node(current->left, value);
            if (value > current->data)
                current->right = add_node(current->right, value);
        }
        return current;
    }
    void inorderTraversal(Node *current)
    {
        if (current == NULL)
            return;
        inorderTraversal(current->left);
        cout << current->data << " ";
        inorderTraversal(current->right);
    }
    void preOrderTraversal(Node *current)
    {
        if (current == NULL)
            return;
        cout << current->data << " ";
        preOrderTraversal(current->left);
        preOrderTraversal(current->right);
    }
    void postOrderTraversal(Node *current)
    {
        if (current == NULL)
            return;
        postOrderTraversal(current->left);
        postOrderTraversal(current->right);
        cout << current->data << " ";
    }

    void print2DUtil(Node *root, int space)
    {
        if (root == NULL)
            return;

        // Increase distance between levels
        space += COUNT;

        // Process right child first
        print2DUtil(root->right, space);

        // Print current node after space
        // count
        cout << endl;
        for (int i = COUNT; i < space; i++)
            cout << " ";
        cout << root->data << "\n";

        // Process left child
        print2DUtil(root->left, space);
    }

    void print2D(Node *root)
    {
        cout << "\n====================================================================";
        print2DUtil(root, 0);
    }
};
int main()
{
    BinaryTree bt;
    Node *root = bt.add_node(NULL, 10);
    bt.add_node(root, 5);
    bt.add_node(root, 100);
    bt.add_node(root, 3);
    bt.add_node(root, 8);
    bt.add_node(root, 40);
    bt.add_node(root, 200);
    bt.add_node(root, 70);
    bt.add_node(root, 4);
    bt.add_node(root, 7);
    bt.add_node(root, 9);
    bt.add_node(root, 2);
    cout << "Inorder traversal\n";
    bt.inorderTraversal(root);
    cout << "\n preorder traversal\n";
    bt.preOrderTraversal(root);
    cout << "\n postorder traversal\n";
    bt.postOrderTraversal(root);
    bt.print2D(root);
    return 0;
}