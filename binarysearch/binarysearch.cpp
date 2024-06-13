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
};

int main()
{
    std::cout << "Hello World!\n";
}

