#pragma once

#include <iostream>

using namespace std;

template <class T>
class clsDblLinkedList
{

protected:

	int _Size = 0;

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

		_Size++;

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

		_Size++;

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

		_Size++;
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

		_Size--;

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

		_Size--;

	}

	void DeleteLastNode() {

		if (Head == NULL) {
			return;
		}

		if (Head->Next == NULL) {
			delete Head;
			Head = NULL;
			_Size--;
			return;
		}

		Node* Current = Head;
		while (Current->Next->Next != NULL) {
			Current = Current->Next;
		}

		Node* Temp = Current->Next;
		Current->Next = NULL;

		delete Temp;

		_Size--;

	}

	int Size() {

		/* This is my solution, and it's not the best solution as the doctor said ;');
		Because this solution Big O is O(n) :')

		int size = 0;
		Node* Current = Head;

		if (Head == NULL) {
			return size;
		}

		while (Current != NULL) {
			size++;
			Current = Current->Next;
		}

		return size; */

		// This solution is much better, because the Big O here is O(1).
		return _Size;
	}

};

