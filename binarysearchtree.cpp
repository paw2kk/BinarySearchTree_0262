#include <iostream>
using namespace std;

class node{
    public:
    int info;
    Node *leftchild;
    Node *rightchild;

    //Constructor
    Node()
    {
        leftchild = nullptr; //Initialoze left child to null
        rightchild = nullptr; //Initialoze left child to null
    }
}