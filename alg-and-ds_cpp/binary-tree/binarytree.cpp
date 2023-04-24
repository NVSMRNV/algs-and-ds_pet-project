#include "binarytree.h"

Node::Node() {
	data_ = NULL;
	left_ = nullptr;
	right_ = nullptr;
}

Node::Node(int data) {
	data_ = data;
	left_ = nullptr;
	right_ = nullptr;
}