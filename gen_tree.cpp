#include <iostream>
#include <vector>
#include <list>
using namespace std;

struct Node
{
    int value;
    Node *parent;
    vector<Node *> children;
};

Node *addNode(Node *parent, int value)
{
    Node *newNode = new Node();
    newNode->value = value;
    newNode->parent = parent;
    if (parent != NULL)
        parent->children.push_back(newNode);
    return newNode;
}

void BFS_display(Node *root)
{
    list<Node *> queue;
    queue.push_back(root);
    while (!queue.empty())
    {
        int size = queue.size();
        while (size > 0)
        {
            Node *current = queue.front();
            cout << current->value << " ";
            for (auto i : current->children)
                queue.push_back(i);
            size--;
            queue.pop_front();
        }
        cout << "\n====================\n";
    }
}

int main()
{
    Node *root = addNode(NULL, 4);
    Node *firstChild = addNode(root, 3);
    Node *secondChild = addNode(root, 5);
    Node *firstNode = addNode(root, 10);
    Node *firstSibling = addNode(firstChild, 7);
    Node *secondSibling = addNode(firstChild, 8);
    Node *thirdSibling = addNode(secondChild, 9);
    BFS_display(root);
}