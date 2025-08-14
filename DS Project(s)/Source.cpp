#include <iostream>
#include "clsDblLinkedList.h"
#include "clsMyQueue.h"

using namespace std;

int main() {

	clsMyQueue <int> MyQueue;

	MyQueue.push(10);
	MyQueue.push(20);
	MyQueue.push(30);
	MyQueue.push(40);
	MyQueue.push(50);
	
	cout << "\nPrint Queue: \n";
	MyQueue.Print();

	cout << "\n\nQueue Size: " << MyQueue.Size();
	cout << "\nQueue Front: " << MyQueue.front();
	cout << "\nQueue Back: " << MyQueue.back();

	MyQueue.pop();

	cout << "\n\nQueue after poping: \n";
	MyQueue.Print();

	cout << "\n\nItem(2) is: " << MyQueue.GetItem(2);

	MyQueue.Reverse();
	cout << "\n\nQueue after reverse : ";
	MyQueue.Print();

	MyQueue.UpdateItem(2, 600);
	cout << "\n\nQueue after updating Item(2) to 600: \n";
	MyQueue.Print();

	MyQueue.InsertAfter(2, 800);
	cout << "\n\nQueue after inserting 800 after 600: \n";
	MyQueue.Print();

	MyQueue.InsertAtFront(1000);
	cout << "\n\nQueue after inserting 1000 at front: \n";
	MyQueue.Print();

	MyQueue.InsertAtBack(2300);
	cout << "\n\nQueue after insering 2300 at the back: \n";
	MyQueue.Print();

	MyQueue.Clear();
	cout << "\n\nQueue after clearing: \n";
	MyQueue.Print();

	system("pause>0");

	return 0;
}