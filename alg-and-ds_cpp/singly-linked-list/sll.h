#pragma once
#include <iostream>

class Node {
	int data_;
	Node* next_;
	friend class SinglyLinkedList;
public:
	Node();
	Node(int data);
};

class SinglyLinkedList {
	Node* head_;
public:
	SinglyLinkedList();
	~SinglyLinkedList();
};