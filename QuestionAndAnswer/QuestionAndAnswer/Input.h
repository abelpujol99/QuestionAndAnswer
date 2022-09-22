#pragma once
#include<chrono>

class Input {

private:

	char inputChar;
	std::chrono::system_clock::time_point timeStamp;

public:

	Input(char input);
	~Input();
};
