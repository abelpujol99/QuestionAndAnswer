#include "Answer.h"

Answer::Answer() {

	this->text = "";
	this->score = 0;

}

Answer::Answer(std::string text, int score) {

	this->text = text;
	this->score = score;
}

Answer::~Answer() {

	delete[] this;
}

bool Answer::CompareAnswer(Answer answer) {

	return this->text == answer.text;
}