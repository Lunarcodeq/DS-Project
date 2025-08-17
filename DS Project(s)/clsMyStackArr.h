#pragma once

#include <iostream>
#include "clsMyQueueArr.h";

using namespace std;
template <class T>

class clsMyStackArr : public clsMyQueueArr <T>
{

public:

	T Top() {

		clsMyQueueArr<T>::front();

	}

	T Bottom() {

		clsMyQueueArr<T>::back();

	}

	void push(T Value) {

		clsMyQueueArr<T>::_DynamicArray.InsertAtBeginning(Value);

	}

};

