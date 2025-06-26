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
}

}

int
main()
{
}