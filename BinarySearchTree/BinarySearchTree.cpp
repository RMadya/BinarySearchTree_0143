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

	void insert(string element) { // Insert a Node in a Binary Search Tree
		Node* newNode = new Node(element, nullptr, nullptr); // Allocate memmory for the new node
		newNode->info = element;  // Assign to the data field of the new node
		newNode->Leftchild = nullptr;  //Make the left child of the new node point to null
		newNode->Rightchild = nullptr; // Make the right child of the new node point to null

		Node* parent = nullptr;
		Node* currentNode = nullptr;

		search(element, parent, currentNode);   // Locate the node which will be the parent of the new node
