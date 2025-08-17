#include <iostream>
#include "clsMyQueueArr.h"

using namespace std;

int main() {

	clsMyQueueArr <int> MyQueue;
	
	MyQueue.push(10);
	MyQueue.push(20);
	MyQueue.push(30);
	MyQueue.push(40);
	MyQueue.push(50);

	cout << "\nQueue\n";
	MyQueue.Print();

	cout << "\nQueue Size: " << MyQueue.Size();
	cout << "\nQueue Front: " << MyQueue.front();
	cout << "\nQueue Back: " << MyQueue.back();
	
	MyQueue.pop();

	cout << "\n\nThe queue after poping: \n";
	MyQueue.Print();

	MyQueue.Reverse();
	cout << "\n\nQueue after reversing: \n";
	MyQueue.Print();

	MyQueue.UpdateItem(2, 200);
	cout << "\n\nQueue after updating item 2 to 200: \n";
	MyQueue.Print();

	MyQueue.InsertAfter(2, 300);
	cout << "\n\nQueue after inserting 300 after index 2: \n";
	MyQueue.Print();

	MyQueue.InsertAtFront(1000);
	cout << "\n\nQueue after inserting 1000 at front: \n";
	MyQueue.Print();

	MyQueue.InsertAtBack(2000);
	cout << "\n\nQueue after inserting 2000 at back: \n";
	MyQueue.Print();

	MyQueue.Clear();
	cout << "\n\nQueue after clear: \n";
	MyQueue.Clear();


	system("pause>0");

	return 0;
}