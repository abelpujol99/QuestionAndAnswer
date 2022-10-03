#include "Word.h"

Word::Word(std::string text) {

	this->text = text;

}

Word::~Word() {

	delete[] this;
}

void Word::CountLetters() {

	int counterLetters = 0;

	for (; counterLetters < this->text.length(); counterLetters++)

		this->numberOfLetters = counterLetters;
}

void Word::CheckLetters() {

	int counterOfVocals = 0, counterOfConsonants = 0;

	for (int i = 0; i < this->text.length(); i++)
	{
		switch (text[i]) {

		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			counterOfVocals++;
			break;

		case 'b':
		case 'c':
		case 'd':
		case 'f':
		case 'g':
		case 'h':
		case 'j':
		case 'k':
		case 'l':
		case 'ñ':
		case 'n':
		case 'm':
		case 'p':
		case 'q':
		case 'r':
		case 's':
		case 't':
		case 'w':
		case 'y':
		case 'x':
		case 'z':
			counterOfConsonants++;
			break;

		default:
			break;
		}
	}

	this->numberOfVocals = counterOfVocals;
	this->numberOfConsonants = counterOfConsonants;
}

void Word::CountIfIsPair() {

	this->pair = this->numberOfLetters % 2 == 0;
}