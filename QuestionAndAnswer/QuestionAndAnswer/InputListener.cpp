#include "InputListener.h"

InputListener* InputListener::Instance(std::string validChars)
{
	if (instance == nullptr)
	{
		this->instance = new InputListener(validChars);
	}

	return instance;
}

InputListener::InputListener(std::string validChars) {

	this->validChars = validChars;
	this->inputs = new std::vector<Input>;
	this->inputMutex = new std::mutex;
	this->stopListener = false;
}

void InputListener::StartListener() {

	this->listener = new std::thread(&AnswerTheQuestion);
	this->listener->join();
	this->inputMutex->unlock();
}

void InputListener::AnswerTheQuestion() {

	std::vector<std::chrono::system_clock::time_point> timeCounters;
	std::chrono::duration<double> elapsedTime;

	timeCounters[0] = std::chrono::system_clock::now();

	while (!CatchControls() || TimeToAnswer(timeCounters, elapsedTime));
	inputMutex->lock();
	return;
}

bool InputListener::CatchControls() {

	return CheckIfAllowedInput(GetAsyncKeyState(WM_KEYDOWN));
}

bool InputListener::TimeToAnswer(std::vector<std::chrono::system_clock::time_point> timeCounters, std::chrono::duration<double> elapsedTime) {

	timeCounters[1] = std::chrono::system_clock::now();
	std::chrono::duration<double> elapsedTime = timeCounters[1] - timeCounters[0];

	return elapsedTime.count() > 5;
}

bool InputListener::CheckIfAllowedInput(char input) {

	for (int i = 0; i < validChars.length(); i++)
	{
		if (input == validChars[i])
		{
			this->inputs->push_back(Input(input));
			return true;
		}
	}

	return false;
}

void InputListener::ClearInputs() {

	this->inputs->clear();
}

char InputListener::GetLastInput()
{
	return inputs->operator[](inputs->size()).GetInputChar();
}
