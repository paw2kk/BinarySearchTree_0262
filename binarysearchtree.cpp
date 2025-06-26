#include <iostream>
using namespace std;

class node
{
public:
    int info;
    Node *leftchild;
    Node *rightchild;

    // Constructor
    Node()
    {
        leftchild = nullptr;  // Initialoze left child to null
        rightchild = nullptr; // Initialoze left child to null
    }
};

class BinaryTree
{
public:
    Node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr; // Initializing root to null
    }

void insert(){
    int x;
    cout << "Masukkan nilai: ";
    cin >> x;

    //Step 1 : Allocate memory for the new node
    Node *newNode = new Node();

    //Step 2 : Assign value to the data field of the new node
    newNode->info = x;

    //Step 3 : Make the left and right child of the new node point to NULL
    newNode->leftchild = nullptr;
    newNode->rightchild = nullptr;

    //Step 4 : Locate the node which will be the parent of the node to be inserted
    Node *parent = nullptr; 
}

}

int
main()
{
}