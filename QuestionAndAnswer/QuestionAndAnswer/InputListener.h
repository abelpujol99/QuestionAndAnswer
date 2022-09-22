#pragma once
#include<vector>
#include<thread>
#include<mutex>
#include<Windows.h>
#include "Input.h"

InputListener* InputListener::instance = nullptr;

class InputListener {

private:

	std::string validChars;
	std::vector<Input>* inputs;
	std::thread* listener;
	std::mutex* inputMutex;
	bool stopListener;
	static InputListener* instance;
	InputListener(std::string validChars);


public:

	InputListener* Instance(std::string validChars);
	~InputListener();
	void StartListener();
	char AnswerTheQuestion();
	bool CatchControls(char& response);
	bool TimeToAnswer(std::vector<std::chrono::system_clock::time_point> timeCounters, std::chrono::duration<double> elapsedTime);
	bool CheckIfAllowedInput(char input, char& response);
	void ClearInputs();
};
