#pragma once

#include <iostream>

using namespace std;

template <class T>
class clsDblLinkedList
{

public:

	static class Node {

	public:

		Node* Prev;
		T Value;
		Node* Next;

	};

	void InsertAtBeginning(T Value) {

		Node* NewNode = new Node();

		NewNode->Value = Value;
		NewNode->Prev = NULL;
		NewNode->Next = _Head;

		if (_Head != NULL) {
			_Head->Prev = NewNode;
		}
		
		_Head = NewNode;

	}

	void PrintList() {

		Node* PrintNode = _Head;

		while (PrintNode != NULL) {
			cout << PrintNode->Value << " ";
			PrintNode = PrintNode->Next;
		}

	}

	void InsertAfter(Node* Current, T Value) {

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

		Node* Head = _Head;

		while (Head != NULL) {

			if (Head->Value == Value)
				return Head;

			Head = Head->Next;

		}

		return NULL;

	}

	void InsertAtEnd(T Value) {

		Node* NewNode = new Node();

		NewNode->Value = Value;
		NewNode->Next = NULL;

		if (_Head == NULL) {
			NewNode->Prev = NULL;
			_Head = NewNode;
		}
		else {

			Node* Head = _Head;

			while (Head->Next != NULL) {
				Head = Head->Next;
			}

			Head->Next = NewNode;
			NewNode->Prev = Head;

		}

	}

	void DeleteNode(Node* NodeToDelete) {

		if (_Head == NULL || NodeToDelete == NULL) {
			return;
		}

		if (_Head == NodeToDelete) {
			_Head = NodeToDelete->Next;
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

		if (_Head == NULL) {
			return;
		}

		Node* Temp = _Head;

		_Head = _Head->Next;
		if (_Head != NULL) {
			_Head->Prev = NULL;
		}

		delete Temp;

	}

	void DeleteLastNode() {

		if (_Head == NULL) {
			return;
		}

		if (_Head->Next == NULL) {
			delete _Head;
			_Head = NULL;
			return;
		}

		Node* Current = _Head;
		while (Current->Next->Next != NULL) {
			Current = Current->Next;
		}

		Node* Temp = Current->Next;
		Current->Next = NULL;

		delete Temp;

	}

private:

	Node* _Head = NULL;

};

