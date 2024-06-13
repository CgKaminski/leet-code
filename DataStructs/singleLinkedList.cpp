#include <iostream>

// Node class for the linked list.
class Node {
public:
	int data;
	Node* next;

	// Default constructor
	Node()
	{
		data = 0;
		next = NULL;
	}

	// Parameterised constructor
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};


// Linked list class
class LinkedList {
	Node* head;

public:
	LinkedList() { head = NULL; }
	void insertNode(int);
	void printList();
	void deleteNode();
};

// Funciton to delete the node at a given position.
void LinkedList::deleteNode(int nodeOffset) {
	// TODO -- implement deleting a node at a given location.

	Node* temp = this->head;

	// Check to see if the offset is the head.
	if (nodeOffset == 0) {
		this->head = temp->head;
		delete temp;
		return;
	}

	// Find the node before the node to be deleted.
	for (int i = 0; temp != NULL && i < nodeOffset - 1; i++) {
		temp = temp->next;
	}

	// If position is more than the number of node.
	if (temp == NULL || temp->next == NULL) return;

	// Store pointer to the next node to be deleted.
	Node *next = temp->next->next;

	delete temp->next;

	// Unlink the deleted node from the list.
	temp->next = next;
}

// Function to print the nodes in the linked list.
void LinkedList::printList() {
	node* current = this->head;

	// Print the data for each node in the linked list.
	while (current != NULL) {
		std::cout << " -> " << current->data << endln;
	current = current->next;
	}
}

// Function to insert node at the end of list.
void LinkedList::insertNode(int data) {
	// If the linked list is empty, make the new node the head
	if (this->head == NULL) {
		this->head = new Node(data);
		return;
	}

	node* current = this->head;

	// Get to the end of the linked list.
	while (current->next != NULL) {
		current = current->next;
	}

	// Added to the end of the list the new node.
	current->next = new Node(data);
}


// Driver code for demostration
int main() {
	LinkedList list;

	// Inserting nodes
	list.insertNode(9);
	list.insertNode(8);
	list.insertNode(7);
	list.insertNode(6);
	list.insertNode(5);

	// Print the linked list.
	std::cout "Elements in the list: ";
	list.printList();
	std::cout << endl;

	// Delete node at position 3.
	list.deleteNode(3)
