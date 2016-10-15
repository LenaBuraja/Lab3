#include "Developer.h"
#include <cstring>

Developer::Developer(char* name) {
	this->name = new char[0];
	setName(name);
}

Developer::Developer() : Developer("") {

}

Developer::Developer(Developer& dever) {
	this->name = new char[0];
	setName(dever.getName());
}

Developer::~Developer() {
	delete[] name;
}

char* Developer::getName() {
	return name;
}

void Developer::setName(char* newName) {
	delete[] name;
	name = new char[std::strlen(newName) + 1];
	strcpy(name, newName);
}
