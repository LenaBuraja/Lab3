#pragma once
#include "Soft.h"

class Game : public Soft {
public:
	enum Genre {
		action,
		adventure,
		rolePlaying,
		simulation,
		puzzle,
		strategy,
		mmo
	};
private:
	Genre genre;
public:
	Game(char* title, Developer* dever, Date creationDate, Genre genre);
	Genre getGenre();
	void setGenre(Genre newGenre);
	void print();
	static void printGenreName(Genre genre);
};
