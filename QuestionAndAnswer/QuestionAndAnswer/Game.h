#pragma once
#include<chrono>
#include<thread>
#include "InputListener.h"
#include "Question.h"

class Game {

private:

	InputListener* inputListener;
	std::vector<Question> questions;
	int score;

public:

	Game(std::vector<Question> questions);
	~Game();
	void GoToNextQuestion();
	void ModifyScore(int score);
	void PrintScore();

};
