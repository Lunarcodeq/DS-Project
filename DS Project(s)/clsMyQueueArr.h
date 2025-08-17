#pragma once

#include <iostream>
#include "clsMyDynamicArray.h"
template <class T>

class clsMyQueueArr
{
protected:

	clsMyDynamicArray <T> _DynamicArray;

public:

	void push(T Value) {

		_DynamicArray.InsertAtEnd(Value);

	}

	void Print() {

		_DynamicArray.PrintList();

	}

	int Size() {

		return _DynamicArray.Size();

	}

	T front() {

		return _DynamicArray.GetItem(0);

	}

	T back() {

		return _DynamicArray.GetItem(Size() - 1);

	}

	void pop() {

		_DynamicArray.DeleteFirstItem();

	}
	
	void IsEmpty() {

		_DynamicArray.IsEmpty();

	}

	T GetItem(T Value) {

		return _DynamicArray.GetItem(Value);

	}

	void Reverse() {

		_DynamicArray.Reverse();

	}

	void UpdateItem(int Index, T Value) {

		_DynamicArray.SetItem(Index, Value);

	}

	void InsertAtFront(T Value) {

		_DynamicArray.InsertAtBeginning(Value);

	}

	void InsertAfter(int Index, T Value) {

		_DynamicArray.InsertAfter(Index, Value);

	}

	void InsertAtBack(T Value) {

		_DynamicArray.InsertAtEnd(Value);

	}

	void Clear() {

		_DynamicArray.Clear();

	}

};

