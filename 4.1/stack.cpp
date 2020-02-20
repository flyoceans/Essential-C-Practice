#include "stack.h"
#include <string>
#include <iostream>

bool Stack::pop(string &elem) {
	if (empty()) return false;
	elem = _stack.back();
	_stack.pop_back();
	return true;
}

bool Stack::peek(string &elem) {
	if (empty()) return false;
	elem = _stack.back();
	return true;
}

bool Stack::push(const string &elem) {
	if (full()) return false;
	_stack.push_back(elem);
	return true;
}

int main()
{
	Stack st;
	string str;

	while (cin >> str && !st.full()) {
		st.push(str);
	}

	cout << st.size();
	while (st.size()) {
		if (st.pop(str))
			cout << str << ' ';
	}
	
	return 0;
}