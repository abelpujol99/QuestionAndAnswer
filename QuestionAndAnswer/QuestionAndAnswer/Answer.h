#pragma once
#include<string>
#include<assert.h>

class Answer
{

private:

	std::string text;
	int score;

public:

	Answer();
	Answer(std::string text, int score);
	~Answer();
	bool CompareAnswer(Answer answer);

};