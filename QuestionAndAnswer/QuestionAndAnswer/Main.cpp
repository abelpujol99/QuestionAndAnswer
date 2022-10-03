#include <iostream>
#include "Main.h"

int main()
{
    std::vector<Question> questions;

#pragma region Questions

    questions.push_back(Question("¿How many legs does a cockroach have?"));
    questions.push_back(Question("¿How many bones does human body have?"));
    questions.push_back(Question("¿What weighs more, a kilo of straw or a kilo of steel?"));
    questions.push_back(Question("¿At what height is located Stratophere?"));
    questions.push_back(Question("¿How many states does USA have?"));
    questions.push_back(Question("¿Did you enjoy this quiz?"));

#pragma endregion

#pragma region Answers

    std::vector<std::vector<Answer>> answersForQuestions;

    std::vector<Answer> answersForQuestion1;

    answersForQuestion1.push_back(Answer("4"));
    answersForQuestion1.push_back(Answer("6"));
    answersForQuestion1.push_back(Answer("8"));

    answersForQuestions.push_back(answersForQuestion1);


    std::vector<Answer> answersForQuestion2;

    answersForQuestion2.push_back(Answer("206"));
    answersForQuestion2.push_back(Answer("248"));
    answersForQuestion2.push_back(Answer("272"));
    answersForQuestion2.push_back(Answer("298"));

    answersForQuestions.push_back(answersForQuestion2);


    std::vector<Answer> answersForQuestion3;

    answersForQuestion3.push_back(Answer("Straw"));
    answersForQuestion3.push_back(Answer("Steel"));
    answersForQuestion3.push_back(Answer("Equal"));

    answersForQuestions.push_back(answersForQuestion3);


    std::vector<Answer> answersForQuestion4;

    answersForQuestion4.push_back(Answer("10 km"));
    answersForQuestion4.push_back(Answer("40 km"));
    answersForQuestion4.push_back(Answer("50 km"));
    answersForQuestion4.push_back(Answer("300 km"));
    answersForQuestion4.push_back(Answer("400 km"));

    answersForQuestions.push_back(answersForQuestion4);


    std::vector<Answer> answersForQuestion5;

    answersForQuestion5.push_back(Answer("41"));
    answersForQuestion5.push_back(Answer("45"));
    answersForQuestion5.push_back(Answer("50"));
    answersForQuestion5.push_back(Answer("60"));

    answersForQuestions.push_back(answersForQuestion5);


    std::vector<Answer> answersForQuestion6;

    answersForQuestion6.push_back(Answer("Yes"));
    answersForQuestion6.push_back(Answer("No"));

    answersForQuestions.push_back(answersForQuestion6);

#pragma endregion

#pragma region CorrectAnswers

    for (int i = 0; i < questions.size(); i++)
    {
        questions[i].SetUpAnswers(answersForQuestions[i]);
    }

    questions[0].SetUpCorrectAnswer("6");
    questions[1].SetUpCorrectAnswer("206");
    questions[2].SetUpCorrectAnswer("Equal");
    questions[3].SetUpCorrectAnswer("40 km");
    questions[4].SetUpCorrectAnswer("50");
    questions[5].SetUpCorrectAnswer("Yes");

#pragma endregion 

    Game game(questions);

    game.PresentQuestion();
}