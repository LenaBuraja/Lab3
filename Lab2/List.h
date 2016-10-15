#pragma once

class List {
	class Elem {
		void* data;
		Elem* next;
	};
	Elem* head = 0;
public:
	List();
	void push();
};
