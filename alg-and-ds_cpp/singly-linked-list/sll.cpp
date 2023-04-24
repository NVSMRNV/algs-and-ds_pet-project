#include "sll.h"

Node::Node() {
	data_ = NULL;
	next_ = nullptr;
}

Node::Node(int data) {
	data_ = data;
	next_ = nullptr;
}

SinglyLinkedList::SinglyLinkedList() {
	head_ = nullptr;
}

SinglyLinkedList::~SinglyLinkedList() {
	std::cout << "\n~SinglyLinkedList\n";
	delete head_;
}
