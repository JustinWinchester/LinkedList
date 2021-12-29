#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

struct Node
{
	int data;
	Node* next;
};

class Linked_list
{
	public:
	Linked_list();
	Linked_list(Linked_list *);
	void linked_list_copy(Node*);
	bool insert_node(Node*);
	bool delete_node(Node*);
	void print_list();
	int list_size();
	int search_node(Node*);
	~Linked_list();
private:
	Node* head;
};
#include "linked_list.cpp"
#endif
