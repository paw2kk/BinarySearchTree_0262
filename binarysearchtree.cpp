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
}

}

int
main()
{
}