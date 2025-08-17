#include <iostream>
#include "clsMyString.h"

using namespace std;

int main() {

	clsMyString S1;
	
	cout << "\n S1 value: " << S1.Value << endl;

	S1.Value = "Mohammed";

	cout << "\nS1 Value: " << S1.Value << endl;

	S1.Value = "Mohammed1";

	cout << "\nS1 Value: " << S1.Value << endl;

	S1.Value = "Mohammed2";

	cout << "\nS1 Value: " << S1.Value << endl;

	cout << "\n\t\tUndo: \n\n";

	S1.Undo();

	cout << "S1 value: " << S1.Value << endl;

	S1.Undo();

	cout << "S1 value: " << S1.Value << endl;

	S1.Undo();

	cout << "S1 value: " << S1.Value << endl;

	cout << "\n\nRedo: \n";

	S1.Redo();

	cout << "\nS1 value: " << S1.Value << endl;

	S1.Redo();

	cout << "\nS1 value: " << S1.Value << endl;

	S1.Redo();

	cout << "\nS1 value: " << S1.Value << endl;

	system("pause>0");

	return 0;
}