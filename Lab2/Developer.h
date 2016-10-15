#pragma once

class Developer {
	char* name;
public:
	Developer(char* name);
	Developer();
	Developer(Developer& dever);
	~Developer();
	char* getName();
	void setName(char* newName);
};
