#include "Minesweeper.h"
#include <iostream>

Minesweeper::Minesweeper(int version) 
	:	Game("Minesweeper", new Developer("Microsoft"), Date(14, 9, 2009), puzzle) {
	setVersion(version);
}

int Minesweeper::getVersion() {
	return version;
}

void Minesweeper::setVersion(int version) {
	this->version = version;
}

void Minesweeper::print() {
	std::cout << "Minesweeper:" << std::endl;
	std::cout << "\tVersion: " << getVersion() << std::endl;
	Game::print();
}
