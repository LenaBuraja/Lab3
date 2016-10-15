#pragma once
#include "Game.h"

class Minesweeper : public Game {
	int version;
public: 
	Minesweeper(int version);
	int getVersion();
	void setVersion(int newVersion);
	void print();
};