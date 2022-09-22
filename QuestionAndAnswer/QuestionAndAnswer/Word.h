#pragma once
#include<string>

class Word {

private:
	std::string text;
	int numberOfVocals;
	int numberOfConsonants;
	int numberOfLetters;
	bool pair;

public:
	Word(std::string word);
	~Word();
	void CountLetters();
	void CheckLetters();
	void CountIfIsPair();
};