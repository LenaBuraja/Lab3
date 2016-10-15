#include "Game.h"
#include <iostream>

Game::Game(char* title, Developer* dever, Date creationDate, Genre genre)
	: Soft(title, dever, creationDate) {
	this->genre = genre;
}

Game::Genre Game::getGenre() {
	return genre;
}

void Game::setGenre(Genre newGenre) {
	genre = newGenre;
}

void Game::print() {
	std::cout << "Game:" << std::endl;
	std::cout << "\tGenre: ";
	printGenreName(genre);
	std::cout << std::endl;
	Soft::print();
}

void Game::printGenreName(Genre genre) {
	switch (genre) {
	case action:
		std::cout << "Action";
		break;
	case adventure:
		std::cout << "Adventure";
		break;
	case rolePlaying:
		std::cout << "Role-Playing";
		break;
	case simulation:
		std::cout << "Simulation";
		break;
	case puzzle:
		std::cout << "Puzzle";
		break;
	case strategy:
		std::cout << "Strategy";
		break;
	case mmo:
		std::cout << "Massively Multiplayer Online";
		break;
	default:
		std::cout << "Name has no setted";
		break;
	}
}
