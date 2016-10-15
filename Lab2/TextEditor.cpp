#include "TextEditor.h"
#include <cstring>
#include <iostream>

TextEditor::TextEditor(char* title, Developer* dever, Date creationDate, char* defaultFormat)
	: Soft(title, dever, creationDate) {
	this->defaultFormat = new char[0];
	setDefaultFormat(defaultFormat);
}

TextEditor::TextEditor(TextEditor& textEditor)
	: Soft(textEditor.getTitle(), &textEditor.getDever(), textEditor.getCreationDate()) {
	this->defaultFormat = new char[0];
	setDefaultFormat(textEditor.getDefaultFormat());
}

TextEditor::~TextEditor() {
	delete[] defaultFormat;
}

char* TextEditor::getDefaultFormat() {
	return defaultFormat;
}

void TextEditor::setDefaultFormat(char* newDefaultFormat) {
	delete[] defaultFormat;
	defaultFormat = new char[std::strlen(newDefaultFormat) + 1];
	strcpy(defaultFormat, newDefaultFormat);
}

void TextEditor::print() {
	std::cout << "TextEditor:" << std::endl;
	std::cout << "\tTitle: " << getTitle() << std::endl;
	std::cout << "\tDeveloper: " << getDever().getName() << std::endl;
	std::cout << "\tCreation Date: ";
	getCreationDate().print();
	std::cout << std::endl;
	std::cout << "\tDefault text type: " << getDefaultFormat() << std::endl;
}
