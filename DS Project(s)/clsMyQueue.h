#pragma once

#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

template <class T>
class clsMyQueue
{

protected:

	clsDblLinkedList<T> _Queue;

public:

	void push(T Value) {
		_Queue.InsertAtEnd(Value);
	}

	void pop() {
		_Queue.DeleteFirstNode();
	}

	void Print() {
		_Queue.PrintList();
	}

	int Size() {
		return _Queue.Size();
	}

	T front() {
		return _Queue.GetItem(0);
	}

	T back() {
		return _Queue.GetItem(Size() - 1);
	}

	T GetItem(int Index) {

		return _Queue.GetItem(Index);

	}

	void Reverse() {

		_Queue.Reverse();

	}

	void UpdateItem(int Index, T Value) {

		_Queue.UpdateItem(Index, Value);

	}

	void InsertAfter(int Index, T Value) {

		_Queue.InsertAfter(Index, Value);

	}

	void InsertAtFront(T Value) {

		_Queue.InsertAtBeginning(Value);

	}

	void InsertAtBack(T Value) {

		_Queue.InsertAtEnd(Value);

	}

	void Clear() {

		_Queue.Clear();

	}

};

