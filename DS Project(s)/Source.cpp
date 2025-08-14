#include <iostream>
#include "clsDblLinkedList.h"
#include "clsMyQueue.h"
#include "clsMyStack.h"

using namespace std;

int main() {

	clsMyStack <int> MyStack;

	MyStack.push(10);
	MyStack.push(20);
	MyStack.push(30);
	MyStack.push(40);
	MyStack.push(50);
	
	cout << "\nPrint Queue: \n";
	MyStack.Print();

	cout << "\n\nQueue Size: " << MyStack.Size();
	cout << "\nQueue Front: " << MyStack.Top();
	cout << "\nQueue Back: " << MyStack.Bottom();

	MyStack.pop();

	cout << "\n\nQueue after poping: \n";
	MyStack.Print();

	cout << "\n\nItem(2) is: " << MyStack.GetItem(2);

	MyStack.Reverse();
	cout << "\n\nQueue after reverse : ";
	MyStack.Print();

	MyStack.UpdateItem(2, 600);
	cout << "\n\nQueue after updating Item(2) to 600: \n";
	MyStack.Print();

	MyStack.InsertAfter(2, 800);
	cout << "\n\nQueue after inserting 800 after 600: \n";
	MyStack.Print();

	MyStack.InsertAtFront(1000);
	cout << "\n\nQueue after inserting 1000 at front: \n";
	MyStack.Print();

	MyStack.InsertAtBack(2300);
	cout << "\n\nQueue after insering 2300 at the back: \n";
	MyStack.Print();

	MyStack.Clear();
	cout << "\n\nQueue after clearing: \n";
	MyStack.Print();

	system("pause>0");

	return 0;
}