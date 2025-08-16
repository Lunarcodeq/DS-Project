#include <iostream>
#include "clsDblLinkedList.h"
#include "clsMyQueue.h"
#include "clsMyStack.h"
#include "clsMyDynamicArray.h"

using namespace std;

int main() {

	clsMyDynamicArray <int> MyArray(10);

	MyArray.SetItem(0, 10);
	MyArray.SetItem(1, 20);
	MyArray.SetItem(2, 30);
	MyArray.SetItem(3, 40);
	MyArray.SetItem(4, 50);

	cout << "\nIs Array Empty: " << MyArray.IsEmpty();
	cout << "\nArray Size: " << MyArray.Size();
	cout << "\n\nArray Items: \n";

	MyArray.PrintList();


	system("pause>0");

	return 0;
}