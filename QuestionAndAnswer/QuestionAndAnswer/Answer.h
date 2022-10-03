#pragma once
#include<iostream>
#include<string>
#include<assert.h>
#include "Input.h"

class Answer
{

private:

	char letter;
	std::string text;
	int score;

public:

	Answer();
	Answer(std::string text);
	~Answer();
	bool CompareAnswer(std::string isCorrectAnswerLetter);
	void PrintAnswer();
	void SetLetter(char letter);
	char GetLetter();
	void SetScore(int score);
	int GetScore();
};