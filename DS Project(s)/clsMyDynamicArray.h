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

	T* _Array;

	clsMyDynamicArray(int Size = 0) {

		if (Size < 0)
			Size = 0;

		_Size += Size;

		_Array = new T[_Size];

	}

	~clsMyDynamicArray() {

		delete[] _Array;

	}

	bool SetItem(int Index, T Value) {

		if (Index >= _Size || _Size < 0)
			return false;

		_Array[Index] = Value;
		return true;

	}

	void PrintList() {

		for (int i = 0; i < _Size; i++) {

			cout << _Array[i] << " ";

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

			_TempArray[i] = _Array[i];

		}

		_Size = NewSize;

		delete[] _Array;
		_Array = _TempArray;

	}

};

