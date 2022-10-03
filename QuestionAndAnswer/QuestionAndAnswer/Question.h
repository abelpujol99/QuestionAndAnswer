#pragma once
#include<vector>
#include "Answer.h"

class Question
{

private:

	std::string text;
	std::vector<Answer> answers;
	Answer correctAnswer;

public:

	Question(std::string text);
	~Question();
	void SetUpAnswers(std::vector<Answer> answers);
	void SetUpLettersForAnswers();
	void SetUpCorrectAnswer(std::string isCorrectAnswerText);
	int CheckAnswer(char inputTyped);
	bool CheckUpperAndLowCaps(char letter, char inputToCheck);
	void PrintQuestion();
	void PresentAnswers();
};