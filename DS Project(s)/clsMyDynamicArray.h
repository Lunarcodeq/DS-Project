#pragma once

#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;
template <class T>


class clsMyDynamicArray
{

protected:

	int _Size = 0;

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

		for (int i = 0; i < _Size - 1; i++) {

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

};

