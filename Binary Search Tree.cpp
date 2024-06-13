#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    string info;
    Node* leftchild;
    Node* rightchild;

    // Constructoe for the node class
    Node(string i, Node* l, Node* r)
    {
        info = i;
        leftchild = l;
        rightchild = r;
    }
};

class BinaryTree
{
public:
    Node* ROOT;

    BinaryTree()
    {
        ROOT = nullptr; //Initializinf ROOT to null
    }  

     void insert(string element)
    {
        Node* newNode = new Node(element, nullptr, nullptr); // Allocate memory for the new node
        newNode->info = element; // Assign value to the data field of the new node
        newNode->leftchild = nullptr; // Make the left child of the new node point tu NULL
        newNode->rightchild = nullptr; // Make the right child of the new node point tu NULL

        Node* parent = nullptr;
        Node* currentNode = nullptr;
        search(element, parent, currentNode); // Locate the node which will be the parent of the node to be insert

        if (parent == nullptr) //uf the parent is Null (Tree is empty)
        {
            ROOT = newNode; // Merk the new node as ROOT
            return; // Exit
        }
        if (element < parent->info) // if the value in the data field of the new node is less than that of the
        {
            parent->leftchild = newNode; // make the left child of the parent point to the new node
        }
        else if (element > parent->info) // if the value in the data field of the new node is greater than that
        {
            parent->rightchild = newNode; // make the right child of the parent point to the new node
        }  
    }

    void search(string element, Node*& parent, Node*& currentNode)
    {
        // This fuction searches the currentNode of the specified Node as null as the current Node of its parent
        currentNode = ROOT;
        parent = NULL;
        while((currentNode !=NULL) && currentNode->info != element)
        {
            parent = currentNode;
            if (element < currentNode->info)
                currentNode = currentNode->leftchild;
            else
                currentNode = currentNode->rightchild;
        }
    }

    void inorder(Node *ptr)
    {
        if (ROOT = NULL)
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr != NULL)
        {
            inorder(ptr->leftchild);
            cout << ptr->info << " ";
            inorder(ptr->rightchild);
        }
    }

    void preoder(Node *ptr)
    {
        if (ROOT = NULL)
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr != NULL)
        {
            cout << ptr->info << " ";
            preoder(ptr->leftchild);
            preoder(ptr->rightchild);
        }
    }

    void postorder(Node *ptr)
    {
        if (ROOT = NULL)
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr != NULL)
        {
            postorder(ptr->leftchild);
            postorder(ptr->rightchild);
            cout << ptr->info << " ";
        }
    } 

};

int main()
{
    BinaryTree x;
    while (true)
}