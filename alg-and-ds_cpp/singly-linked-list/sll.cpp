#include "sll.h"

// default constructor for Node
Node::Node() {
	data_ = NULL;
	next_ = nullptr;
}

// constructor with parameters for Node
Node::Node(int data) {
	data_ = data;
	next_ = nullptr;
}

// default constructor for SinglyLinkedList
SinglyLinkedList::SinglyLinkedList() {
	head_ = nullptr;
}

// destructor for SinglyLinkedList
SinglyLinkedList::~SinglyLinkedList() {
	while (head_ != nullptr) {
		pop_front();
	}
}

// returns the number of elements in the list
int SinglyLinkedList::size() {
	int size = 0;
	Node* current = head_;
	while (current != nullptr) {
		size++;
		current = current->next_;
	}
	return size;
}

// print the list
void SinglyLinkedList::print() {
	Node* current = head_;
	while (current != nullptr) {
		std::cout << "(" << current->data_ << ")" << (current->next_ == nullptr ? "" : " -> ");
		current = current->next_;
	}
}

// checks if the list has no elements
bool SinglyLinkedList::empty() {
	return head_ == nullptr;
}

// removes the first element
void SinglyLinkedList::pop_front() {
	Node* tmp = head_;
	head_ = tmp->next_;
	delete tmp;
}

// adds an element to the end
void SinglyLinkedList::push_back(int data) {
	if (head_ == nullptr) {
		head_ = new Node(data);
	}
	else {
		Node* current = head_;
		while (current->next_ != nullptr) {
			current = current->next_;
		}
		current->next_ = new Node(data);
	}
}
