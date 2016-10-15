#pragma once
#include "Soft.h"
#include "OS.h"

class Virus : public Soft {
	OS::type targetOS;
public:
	Virus(char* title, Developer* dever, Date creationDate, OS::type targetOS);
	OS::type getTargetOS();
	void setTargetOS(OS::type newtargetOS);
	void print();
};

