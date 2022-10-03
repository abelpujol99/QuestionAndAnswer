#include "Input.h"

Input::Input(char input) {

	this->inputChar = input;
	this->timeStamp = std::chrono::system_clock::now();
}

Input::~Input() {

	delete[] this;
}

char Input::GetInputChar() {

	return this->inputChar;
}