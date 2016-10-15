#pragma once
#include "Date.h"
#include "Developer.h"

class Soft {
	char* title;
	Date creationDate;
	Developer* dever;
public:
	Soft(char* title, Developer* dever, Date creationDate);
	Soft(Soft& soft);
	~Soft();
	char* getTitle();
	Date getCreationDate();
	Developer getDever();
	void setTitle(char* newTitle);
	void setCreationDate(Date newCreationDate);
	void setDever(Developer* newDever);
	virtual void print() = 0;
};
