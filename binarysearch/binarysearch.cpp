// binarysearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class node {
public:
    string info;
    node* leftchild;
    node* rightchild;

    //constructor for the node class
    node(string i, node* l, node* r) {
        info = i;
        leftchild = l;
        rightchild = r;
    } 
};

class binarytree {
public:
    node* ROOT;

    binarytree() {
        ROOT = nullptr;//initializing root to null
    }
    void insert(string element) { //insert a node in the binary search tree
        node* newNode = new node(element, nullptr, nullptr);// alocate memory for the new node
        newNode->info = element;// assgin value to the data field of the new node
        newNode->leftchild = nullptr; // make the left child of the node point to null
        newNode->rightchild = nullptr; // make the right child of the new node point to null

        node* parent = nullptr;
        node* currentNode = nullptr;
        search(element parent, currentNode); // locate the node wich all be the parent of the tobe insert

        if (parent == nullptr) {
            ROOT = newNode; // mark the new node ass root
            return;
        }
        if (element < parent->info) {// if the value in the data field of the new node is less than that  of the 
            parent->leftchild = newNode;//make the left child of the parent point to the new node
        }
        else if (element > parent->info) {// if the value in data field of the newnode
            parent->rightchild = newNode;// make the right child of the parent point to the new node 
        }
    }

    void search(string element, node*& parent, node* currentNode) {
        //this function search the currentnode of the specified node as well as the current node of this parent
        currentNode = ROOT;
        parent = NULL;
        while ((currentNode != NULL) && (currentNode->info != element)) {
            parent = currentNode;
            if (element < currentNode->info)
                currentNode = currentNode->leftchild;
            else
                currentNode = currentNode->rightchild;
        }
    }
    void inorder(node* ptr) {
        if (ROOT == NULL)
        {
            cout << "tree is empty" << endl;
            return;
        }
        if (ptr != NULL)
        {
            inorder(ptr->leftchild);// left
            cout << ptr->info << " ";// root
            inorder(ptr->rightchild);// right
        }
    }

    void preorder(node* ptr) {
        if (ROOT == NULL)
        {
            cout << "tree is empty" << endl;
            return;
        }
        if (ptr != NULL)
        {
            cout << ptr->info << " ";// root
            preorder(ptr->leftchild);// left
            preorder(ptr->rightchild);// right
        }
    }
};

int main()
{
    std::cout << "Hello World!\n";
}

