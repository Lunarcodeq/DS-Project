#pragma once

#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;
template <class T>


class clsMyDynamicArray
{

protected:

	int _Size = 0;
	T* _TempArray;

public:

	T* Array;

	clsMyDynamicArray(int Size = 0) {

		if (Size < 0)
			Size = 0;

		_Size = Size;

		Array = new T[_Size];

	}

	~clsMyDynamicArray() {

		delete[] Array;

	}

	bool SetItem(int Index, T Value) {

		if (Index >= _Size || _Size < 0)
			return false;

		Array[Index] = Value;
		return true;

	}

	void PrintList() {

		for (int i = 0; i < _Size; i++) {

			cout << Array[i] << " ";

		}

		cout << "\n";

	}

	bool IsEmpty() {

		return (_Size == 0);

	}

	int Size() {
		return _Size;
	}

	void Resize(int NewSize) {

		if (NewSize < 0)
			NewSize = 0;

		_TempArray = new T[NewSize];

		if (NewSize < _Size)
			_Size = NewSize;

		for (int i = 0; i < _Size; i++) {

			_TempArray[i] = Array[i];

		}

		_Size = NewSize;

		delete[] Array;
		Array = _TempArray;

	}

	T GetItem(int Index) {

		if (Index < 0 || Index > _Size - 1)
			return 0;

		return Array[Index];

	}

	void Reverse() {
		
		_TempArray = new T[_Size];

		int counter = 0;

		for (int i = _Size - 1; i >= 0; i--) {

			_TempArray[counter] = Array[i];
			counter++;

		}

		delete[] Array;
		Array = _TempArray;

	}

	void Clear() {

		_Size = 0;

		delete[] Array;
		Array = new T[_Size];

	}

	bool DeleteItemAt(int IndexToDelete) {

		if (IndexToDelete > _Size || _Size < 0)
			return false;

		int NewSize = _Size - 1;

		_TempArray = new T[NewSize];

		for (int i = 0; i < IndexToDelete; i++) {

			_TempArray[i] = Array[i];

		}

		for (int j = IndexToDelete + 1; j < NewSize + 1; j++)
		{

			_TempArray[j - 1] = Array[j];

		}

		delete[] Array;
		_Size = NewSize;
		Array = _TempArray;

		return true;

	}

	void DeleteFirstItem() {

		DeleteItemAt(0);

	}

	void DeleteLastItem() {

		DeleteItemAt(_Size - 1);

	}

	int Find(T Value) {

		for (int i = 0; i < _Size; i++) {

			if (Array[i] == Value)
				return i;

	   }

		return -1;

	}

	bool DeleteItem(T Value) {

		int ItemIndex = Find(Value);

		if (ItemIndex == -1)
			return false;

		DeleteItemAt(ItemIndex);

	}

	bool InsertAt(int Index, T Value) {

		if (Index > _Size || Index < 0)
			return false;

		_Size = _Size + 1;

		_TempArray = new T[_Size];

		for (int i = 0; i < Index; i++) {

			_TempArray[i] = Array[i];

		}

		_TempArray[Index] = Value;

		for (int j = Index + 1; j < _Size; j++) {

			_TempArray[j] = Array[j - 1];

		}

		delete[] Array;
		Array = _TempArray;
		return true;

	}

	void InsertAtBeginning(T Value) {

		InsertAt(0, Value);

	}

	bool InsertBefore(int Index, T Value) {

		if (Index < 1)
			return InsertAt(0, Value);
		else
			return InsertAt(Index - 1, Value);

	}

	bool InsertAfter(int Index, T Value) {

		if (Index >= _Size)
			return InsertAt(_Size, Value);
		else
			return InsertAt(Index + 1, Value);

	}

	void InsertAtEnd(T Value) {

		InsertAt(_Size, Value);

	}

};

