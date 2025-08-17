#include <iostream>
#include "clsDblLinkedList.h"
#include "clsMyQueue.h"
#include "clsMyStack.h"
#include "clsMyDynamicArray.h"

using namespace std;

int main() {

	clsMyDynamicArray <int> MyArray(5);

	MyArray.SetItem(0, 10);
	MyArray.SetItem(1, 20);
	MyArray.SetItem(2, 30);
	MyArray.SetItem(3, 40);
	MyArray.SetItem(4, 50);

	cout << "\nIs Array Empty: " << MyArray.IsEmpty();
	cout << "\nArray Size: " << MyArray.Size();
	cout << "\n\nArray Items: \n";

	MyArray.PrintList();

	MyArray.InsertAtBeginning(500);
	cout << "\nArray after inserting 500 at beginning: \n";
	MyArray.PrintList();
	cout << "\nArray Size: " << MyArray.Size();

	MyArray.InsertBefore(2, 600);
	cout << "\nArray after inserting 600 before index 2: \n";
	MyArray.PrintList();
	cout << "\nArray Size: " << MyArray.Size();

	MyArray.InsertAfter(2, 800);
	cout << "\nArray after inserting 800 after index 2: \n";
	MyArray.PrintList();
	cout << "\nArray Size: " << MyArray.Size();

	MyArray.InsertAtEnd(1000);
	cout << "\nArray after inserting 1000 at end: \n";
	MyArray.PrintList();
	cout << "\nArray Size: " << MyArray.Size();

	system("pause>0");

	return 0;
}