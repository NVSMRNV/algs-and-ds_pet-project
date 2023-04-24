#include "binarytree.h"

// default constructor for Node
Node::Node() {
	data_ = NULL;
	left_ = nullptr;
	right_ = nullptr;
}

// constructor with parameters for Node
Node::Node(int data) {
	data_ = data;
	left_ = nullptr;
	right_ = nullptr;
}

// default constructor for BinaryTree
BinaryTree::BinaryTree() {
	root_ = nullptr;
}

// destructor for BinaryTree
BinaryTree::~BinaryTree() {
	// todo
}