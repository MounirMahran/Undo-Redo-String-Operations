#pragma once
#include "clsDblLinkedList.h"

template <class T> class clsMyQueue
{
protected:
	clsDblLinkedList <T> Queue;
public:

	void Print() {
		Queue.PrintList();
	}

	void Push(T NewItem) {
		Queue.InsertAtEnd(NewItem);
	}

	void Pop() {
		Queue.DeleteFirstNode();
	}

	short Size() {
		return Queue.Size();
	}

	bool IsEmpty() {
		return Size() == 0;
	}

	T Front() {
		return Queue.GetItem(0);
	}

	T Back() {
		return Queue.GetItem(Size() - 1);
	}

	T GetItem(short Index) {
		return Queue.GetItem(Index);
	}

	void Reverse() {
		Queue.Reverse();
	}

	bool UpdateItem(short Index, T NewValue) {
		return Queue.UpdateItem(Index, NewValue);
	}

	bool InsertAfter(short Index, T Value) {
		return Queue.InsertAfter(Index, Value);
	}

	void InsertAtFront(T Value) {
		return Queue.InsertAtBeginning(Value);
	}

	void InsertAtBack(T Value) {
		return Queue.InsertAtEnd(Value);
	}

	void Clear() {
		Queue.Clear();
	}


};

