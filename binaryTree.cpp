#include <iostream>
using namespace std;
class Node{
    public:
       int data;
       Node *left;
       Node *right;
       Node(int data){
           this->data = data;
           this->left = NULL;
           this->right = NULL;
       }
};
class BinaryTree{
    public:
      Node *root;
     BinaryTree(){
       this->root = NULL;
     }
     Node * addNode(Node * current, int data, bool isRight){
         Node *newNode = new Node(data);
         if(current == NULL){
             root = newNode;
            return newNode;
         }
         if(!isRight){
             current->left = newNode;
            return newNode;
         }
         current->right= newNode;
         return newNode;
     }
     void inorderTraversal(Node *current){
         if(current == NULL){
             return;
         }
         inorderTraversal(current->left);
         cout<<current->data<<" ";
         inorderTraversal(current->right);
     }
     void preOrderTraversal(Node *current){
         if(current == NULL){
             return;
         }
         cout<<current->data<<" ";
         preOrderTraversal(current->left);
         preOrderTraversal(current->right);
     }
     void postOrderTraversal(Node *current){
         if(current == NULL){
             return;
         }
         postOrderTraversal(current->left);
         postOrderTraversal(current->right);
         cout<<current->data<<" ";
     }
};
int main(){
    BinaryTree bt;
    Node *root = bt.addNode(NULL, 1, false);
    Node *left1 = bt.addNode(root, 2, false);
    Node *right1 = bt.addNode(root, 7, true);
    Node *left12 = bt.addNode(left1, 5, false);
    Node *right12 = bt.addNode(left1, 4, true);
    Node *right123 = bt.addNode(left12, 3, right);
    Node *rleftright12 = bt.addNode(right12, 6, false);
    Node *leftright1 = bt.addNode (right1, 9, false);
    Node *rightright1 = bt.addNode (right1, 10, true);
    Node *rightleftright1 = bt.addNode(leftright1, 11,true);
    Node *leftrightright1 = bt.addNode(rightright1, 3, false);
    Node *rightrightright1= bt.addNode(rightright1, 15, true);
  cout<<"Inorder traversal\n";
  bt.inorderTraversal(root);
  cout<<"\n preorder traversal\n";
  bt.preOrderTraversal(root);
  cout<<"\n postorder traversal\n";
  bt.postOrderTraversal(root);
    return 0;
}