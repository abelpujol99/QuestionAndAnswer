#pragma once
#include<vector>
#include "Answer.h"

class Question
{

private:

	std::string text;
	std::vector<Answer*> answers;
	Answer correctAnswer;

public:

	Question(std::vector<Answer*> answers);
	~Question();
	bool CheckAnswer(Answer answer);
};
