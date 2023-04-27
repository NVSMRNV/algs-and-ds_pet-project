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

// searches for an item with the specified key in the list
Node& SinglyLinkedList::at(int key) {
	Node* current = head_;
	while (current != nullptr && current->data_ != key) {
		current = current->next_;
	}
	return *current;
}

// inserts an element at biginning
void SinglyLinkedList::push_front(int data) {
	Node* node = new Node(data);
	if (head_ == nullptr) {
		head_ = node;
	}
	else {
		node->next_ = head_;
		head_ = node;
	}
}

// removes the last element
void SinglyLinkedList::pop_back() {
	if (head_ == nullptr) {
		return;
	}
	else if (head_->next_ == nullptr) {
		Node* tmp = head_;
		head_ = tmp->next_;
		delete tmp;
	}
	else {
		Node* current = head_;
		Node* previous = nullptr;
		while (current->next_ != nullptr) {
			previous = current;
			current = current->next_;
		}
		previous->next_ = nullptr;
		delete current;
	}
}

// insert element in the list
void SinglyLinkedList::insert(int key, int data) {
	Node* previous = &at(key);
	if (previous == nullptr) {
		return;
	}
	else {
		Node* node = new Node(data);
		node->next_ = previous->next_;
		previous->next_ = node;
	}
}
