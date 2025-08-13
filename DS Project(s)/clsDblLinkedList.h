#pragma once

#include <iostream>

using namespace std;

template <class T>
class clsDblLinkedList
{

public:

	class Node {

	public:

		Node* Prev;
		T Value;
		Node* Next;

	};

	Node* Head = NULL;

	void InsertAtBeginning(T Value) {

		Node* NewNode = new Node();

		NewNode->Value = Value;
		NewNode->Prev = NULL;
		NewNode->Next = Head;

		if (Head != NULL) {
			Head->Prev = NewNode;
		}
		
		Head = NewNode;

	}

	void PrintList() {

		Node* PrintNode = Head;

		while (PrintNode != NULL) {
			cout << PrintNode->Value << " ";
			PrintNode = PrintNode->Next;
		}

	}

	void InsertAfter(Node* &Current, T Value) {

		Node* NewNode = new Node();

		NewNode->Value = Value;
		NewNode->Next = Current->Next;

		if (Current->Next != NULL) {

			Node* CurrentNext = Current->Next;
			CurrentNext->Prev = NewNode;
		}

		Current->Next = NewNode;

	}

	Node* Find(T Value) {

		Node* Current = Head;

		while (Current != NULL) {

			if (Current->Value == Value)
				return Current;

			Current = Current->Next;

		}

		return NULL;

	}

	void InsertAtEnd(T Value) {

		Node* NewNode = new Node();

		NewNode->Value = Value;
		NewNode->Next = NULL;

		if (Head == NULL) {
			NewNode->Prev = NULL;
			Head = NewNode;
		}
		else {

			Node* Current = Head;

			while (Current->Next != NULL) {
				Current = Current->Next;
			}

			Current->Next = NewNode;
			NewNode->Prev = Current;

		}

	}

	void DeleteNode(Node* &NodeToDelete) {

		if (Head == NULL || NodeToDelete == NULL) {
			return;
		}

		if (Head == NodeToDelete) {
			Head = NodeToDelete->Next;
		}

		if (NodeToDelete->Prev != NULL) {
			Node* NodePrev = NodeToDelete->Prev;
			NodePrev->Next = NodeToDelete->Next;
		}

		if (NodeToDelete->Next != NULL) {
			Node* NodeNext = NodeToDelete->Next;
			NodeNext->Prev = NodeToDelete->Prev;
		}

		delete NodeToDelete;

	}

	void DeleteFirstNode() {

		if (Head == NULL) {
			return;
		}

		Node* Temp = Head;

		Head = Head->Next;
		if (Head != NULL) {
			Head->Prev = NULL;
		}

		delete Temp;

	}

	void DeleteLastNode() {

		if (Head == NULL) {
			return;
		}

		if (Head->Next == NULL) {
			delete Head;
			Head = NULL;
			return;
		}

		Node* Current = Head;
		while (Current->Next->Next != NULL) {
			Current = Current->Next;
		}

		Node* Temp = Current->Next;
		Current->Next = NULL;

		delete Temp;

	}

};

