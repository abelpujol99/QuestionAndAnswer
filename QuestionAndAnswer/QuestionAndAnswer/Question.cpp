#include "Question.h"

Question::Question(std::vector<Answer*> answers) {

	assert(!answers.empty());

	for (int i = 0; i < answers.size(); i++)
	{
		this->answers[i] = answers[i];
	}
}

Question::~Question() {

	delete[] this;
}

bool Question::CheckAnswer(Answer answer) {

	return this->correctAnswer.CompareAnswer(answer);
}