#include "Answer.h"

Answer::Answer() {

	this->text = "";
}

Answer::Answer(std::string text) {

	this->text = text;
	this->score = 0;
}

Answer::~Answer() {

	delete[] this;
}

bool Answer::CompareAnswer(std::string answer) {

	return this->text == answer;
}

void Answer::PrintAnswer() {

	std::cout << this->letter << " -> " << this->text << std::endl;
}

void Answer::SetLetter(char letter) {

	this->letter = letter;
}

char Answer::GetLetter() {

	return letter;
}

void Answer::SetScore(int score) {

	this->score = score;
}

int Answer::GetScore() {

	return this->score;
}