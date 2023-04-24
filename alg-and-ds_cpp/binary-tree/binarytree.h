#pragma once
#include <iostream>

class Node {
	int data_;
	Node* left_;
	Node* right_;
public:
	Node();
	Node(int data);
};

class BinaryTree {
	Node* root_;
public:
	BinaryTree();
	~BinaryTree();
};
