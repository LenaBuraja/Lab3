#pragma once
#include "Soft.h"

class TextEditor : public Soft {
	char* defaultFormat;
public:
	TextEditor(char* title, Developer* dever, Date creationDate, char* defaultFormat);
	TextEditor(TextEditor& textEditor);
	~TextEditor();
	char* getDefaultFormat();
	void setDefaultFormat(char* newDefaultFormat);
	void print();
};
