#include "Virus.h"
#include <iostream>

Virus::Virus(char* title, Developer* dever, Date creationDate, OS::type targetOS)
	: Soft(title, dever, creationDate) {
	this->targetOS = targetOS;
}

OS::type Virus::getTargetOS() {
	return targetOS;
}

void Virus::setTargetOS(OS::type newTargetOS) {
	targetOS = newTargetOS;
}

void Virus::print() {
	std::cout << "Virus:" << std::endl;
	std::cout << "\tTitle: " << getTitle() << std::endl;
	std::cout << "\tDeveloper: " << getDever().getName() << std::endl;
	std::cout << "\tCreation Date: ";
	getCreationDate().print();
	std::cout << std::endl;
	std::cout << "\tType OS: ";
	OS::printTypeOS(targetOS);
	std::cout << std::endl;
}
