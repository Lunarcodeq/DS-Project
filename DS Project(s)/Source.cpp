#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

int main() {

	clsDblLinkedList <int> MyDblLinkedList;

	MyDblLinkedList.InsertAtBeginning(5);
	MyDblLinkedList.InsertAtBeginning(4);
	MyDblLinkedList.InsertAtBeginning(3);
	MyDblLinkedList.InsertAtBeginning(2);
	MyDblLinkedList.InsertAtBeginning(1);

	cout << "\nLinked List Content: \n";
	MyDblLinkedList.PrintList();

	clsDblLinkedList <int>::Node* N1 = MyDblLinkedList.Find(2);

	if (N1 != NULL)
		cout << "\n\nNode with this value is Found :)\n";
	else
		cout << "\n\nNode with this value is Not Found :( \n";

	MyDblLinkedList.InsertAfter(N1, 500);
	cout << "\n\nAfter Inserting 500 after 2: \n";
	MyDblLinkedList.PrintList();

	MyDblLinkedList.InsertAtEnd(700);
	cout << "\n\nAfter Inserting 700 at end: \n";
	MyDblLinkedList.PrintList();

	clsDblLinkedList <int>::Node* N2 = MyDblLinkedList.Find(4);
	MyDblLinkedList.DeleteNode(N2);
	cout << "\n\nAfter Deleteing 4: \n";
	MyDblLinkedList.PrintList();

	MyDblLinkedList.DeleteFirstNode();
	cout << "\n\nAfter deleting fisrt node: \n";
	MyDblLinkedList.PrintList();

	MyDblLinkedList.DeleteLastNode();
	cout << "\n\nAfter deleting last node: \n";
	MyDblLinkedList.PrintList();

	system("pause>0");

	return 0;
}