#include<iostream>
#include "Game.h"

Game::Game(std::vector<Question> questions) {

	//this->inputListener = InputListener::Instance("ABCDE");
	this->questions = questions;
	this->actualQuestion = 0;
	this->score = 0;
	this->SetUpQuestions();
}

Game::~Game() {

	delete[] this;
}

void Game::SetUpQuestions() {

	for (int i = 0; i < questions.size(); i++)
	{
		this->questions[i].SetUpLettersForAnswers();
	}
}

void Game::PresentQuestion() {

	this->questions[actualQuestion].PrintQuestion();
	std::cin.ignore();
	this->questions[actualQuestion].PresentAnswers();
	this->inputListener->StartListener();
	//this->ModifyScore(this->questions[actualQuestion].CheckAnswer(this->inputListener->GetLastInput()));
	this->GoToNextQuestion();
}

void Game::GoToNextQuestion() {

	this->actualQuestion++;
	if (actualQuestion == 5)
	{
		std::cout << "Thanks for playing" << std::endl;
	}
}

void Game::ModifyScore(int score) {

	this->score += score;
}

void Game::PrintScore() {

	std::cout << "Your Score is: " << this->score << std::endl;
}