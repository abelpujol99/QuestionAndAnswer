#include<iostream>
#include "Game.h"

Game::Game(std::vector<Question> questions) {

	this->inputListener = InputListener::Instance("ABCD");
	this->questions = questions;
	this->score = 0;
	inputListener->StartListener();
}

Game::~Game() {

	delete[] this;
}

void Game::GoToNextQuestion() {

}

void Game::ModifyScore(int score) {

	this->score += score;
}

void Game::PrintScore() {

	std::cout << "Your Score is: " << this->score << std::endl;
}