#pragma once

#include <stack>

class clsMyString {
private:

	stack <string> _Undo;
	stack <string> _Redo;
	string _Value;

public:

	void SetValue(string value) {

		_Undo.push(_Value);
		_Value = value;

	}

	string GetValue() {

		return _Value;

	}

	__declspec(property(get = GetValue, put = SetValue)) string Value;

	void Undo() {

		_Redo.push(_Value);
		_Value = _Undo.top();
		_Undo.pop();

	}

	void Redo() {

		_Undo.push(_Value);
		_Value = _Redo.top();
		_Redo.pop();

	}

};