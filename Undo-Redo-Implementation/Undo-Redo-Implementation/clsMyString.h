#pragma once
#include <iostream>
#include "clsMyStack.h"
using namespace std;

class clsMyString
{
private: 
	string _Value = "";
	clsMyStack <string> _Undo;
	clsMyStack <string> _Redo;

public:

	clsMyString() {
		_Undo.Push(_Value);
		_Redo.Push(_Value);
	}

	void SetValue(string NewValue) {
		_Value = NewValue;
		_Undo.Push(_Value);
	}

	string GetValue() {
		return _Value;
	}

	__declspec(property(get = GetValue, put = SetValue)) string Value;

	void Undo() {
		if (!_Undo.IsEmpty()) {
			_Redo.Push(_Undo.Top());
			_Undo.Pop();
			_Value = _Undo.Top();
		}
	}
	void Redo() {
		if (!_Redo.IsEmpty()) {
			_Undo.Push(_Redo.Top());
			_Value = _Redo.Top();
			_Redo.Pop();
		}
	}
};

