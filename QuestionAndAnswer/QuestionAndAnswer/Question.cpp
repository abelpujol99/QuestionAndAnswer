#include "Question.h"

Question::Question(std::string text) {

	assert(text != "");

	this->text = text;
}

Question::~Question() {

	delete[] this;
}

void Question::SetUpAnswers(std::vector<Answer> answers) {

	assert(!answers.empty());
	//ASSERT CORRECT ANSWER

	for (int i = 0; i < answers.size(); i++)
	{
		this->answers[i] = answers[i];
	}
}

void Question::SetUpLettersForAnswers() {

	for (int i = 0; i < answers.size(); i++)
	{
		this->answers[i].SetLetter('A' + i);
	}
}

void Question::SetUpCorrectAnswer(std::string isCorrectAnswerText) {

	for (int i = 0; i < answers.size(); i++)
	{
		if (answers[i].CompareAnswer(isCorrectAnswerText))
		{
			this->correctAnswer = answers[i];
			this->correctAnswer.SetScore(answers.size());
		}
		this->answers[i].SetScore(0);
	}
}

int Question::CheckAnswer(char inputTyped) {

	for (int i = 0; i < answers.size(); i++)
	{
		if (CheckUpperAndLowCaps(this->answers[i].GetLetter(), inputTyped))
		{
			return this->answers[i].GetScore();
		}
	}
}

bool Question::CheckUpperAndLowCaps(char letter, char inputToCheck) {

	return letter == inputToCheck || letter == inputToCheck + 'a' - 'A';

}

void Question::PrintQuestion() {

	std::cout << this->text << std::endl << std::endl << "Press Enter to see the answers" << std::endl;
}

void Question::PresentAnswers() {

	for (int i = 0; i < this->answers.size(); i++)
	{
		this->answers[i].PrintAnswer();
	}
}