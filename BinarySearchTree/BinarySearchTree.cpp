#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	string info;
	Node* Leftchild;
	Node* Rightchild;

	Node(string i, Node* l, Node* r) {
		info = i;
		Leftchild = l;
		Rightchild = r;
	}
};

class BinaryTree
{
public:
	Node* ROOT;

	BinaryTree() {
		ROOT = nullptr;  // Initializing ROOT to null
	}

	