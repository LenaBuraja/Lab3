#include "Soft.h"
#include <cstring>
#include <iostream>

Soft::Soft(char* title, Developer* dever, Date creationDate) {
	this->title = new char[0];
	setTitle(title);
	setDever(dever);
	setCreationDate(creationDate);
}

Soft::Soft(Soft& soft) {
	this->title = new char[0];
	setTitle(soft.getTitle());
	setDever(&soft.getDever());
	setCreationDate(soft.getCreationDate());
}

Soft::~Soft() {
	delete[] title;
}

char* Soft::getTitle() {
	return title;
}

Date Soft::getCreationDate() {
	return creationDate;
}

Developer Soft::getDever() {
	return *dever;
}

void Soft::setTitle(char* newTitle) {
	delete[] title;
	title = new char[std::strlen(newTitle) + 1];
	strcpy(title, newTitle);
}

void Soft::setDever(Developer* newDever) {
	dever = newDever;
}

void Soft::setCreationDate(Date newCreationDate) {
	creationDate = newCreationDate;
}

void Soft::print() {
	std::cout << "Soft:" << std::endl;
	std::cout << "\tTitle: " << getTitle() << std::endl;
	std::cout << "\tDeveloper: " << getDever().getName() << std::endl;
	std::cout << "\tCreation Date: ";
	getCreationDate().print();
	std::cout << std::endl;
}
