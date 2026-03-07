---
creation_date: 2025-10-11
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=UprcpdwuwCg&list=RD4sc2bnjcJNM&index=2
Author: "[[abu-hedhoud]]"
topic: "[[Project 2]]"
---
> [!summary]-
> 

# <font color="#ffff00"><u>Project 1 of Course 5.</u></font>
---
## <font color="#de7802">Problem of Project :</font>

![Image from Gyazo](https://i.gyazo.com/db470d85c8b9773601816efd1a1a4360.png)
![Image from Gyazo](https://i.gyazo.com/6db649b930f607f11a7c0758b602710a.png)

---
## <font color="#00b050">Solution :</font>
### <font color="#ffff00">My Input:  Doesn't work</font>
```cpp
#include <iostream>
#include <string>
#include <ctime>
#include <cmath>

using namespace std;

enum enLevel {

	Easy = 1, Med = 2, Hard = 3, Mix = 4
};

enum enTypeOperation {

	Add = 1, Sub = 2, Mul = 3, Div = 4, MixOp = 5
};

struct strFinalResult {

	short NumberQuestions = 0;
	enLevel QuestionsLevel;
	enTypeOperation OpType;
	short NumberOfRightAnswers = 0;
	short NumberOfWrongAnswers = 0;

};

int ReadRandomNumber(int from, int to) {

	int RandNamer = rand() % (to - from + 1) + from;

	return RandNamer;
}

short ReadHowManyQuestions() {

	short NumberQuestions;

	cout << "How many questions do you want answer: ?";
	cin >> NumberQuestions;

	return NumberQuestions;
}

enLevel ReadQuestionsLevel() {

	short QuestionsLevel = 0;

	do
	{
		cout << "Enter Questions Level: [1] Easy, [2] Med, [3] Hard, [4] Mix ? ";
		cin >> QuestionsLevel;

	} while (QuestionsLevel < 1 || QuestionsLevel > 4);

	return enLevel(QuestionsLevel);
}

enTypeOperation ReadOperationType() {

	short OperationType = 0;

	do
	{
		cout << "Enter Operation Type: [1] Add, [2] Sub, [3] Mul, [4] Div, [5] Mix ? ";
		cin >> OperationType;

	} while (OperationType < 1 || OperationType > 5);

	return enTypeOperation(OperationType);
}

strFinalResult OperationsType_Add() {

	enTypeOperation TypeOperation = ReadOperationType();
	enLevel Level = ReadQuestionsLevel();
	strFinalResult FinalResult;

	short Answers = 0;

	short FirstEasy = ReadRandomNumber(1, 10);
	short SecondEasy = ReadRandomNumber(1, 10);

	short FirstMed = ReadRandomNumber(10, 100);
	short SecondMed = ReadRandomNumber(10, 100);

	short FirstHard = ReadRandomNumber(100, 1000);
	short SecondHard = ReadRandomNumber(100, 1000);

	short FirstMix = ReadRandomNumber(1000, 10000);
	short SecondMix = ReadRandomNumber(1000, 10000);


	if (TypeOperation == enTypeOperation::Add) {

		if (Level == enLevel::Easy)
		{
			cout << FirstEasy << "\n";
			cout << SecondEasy << "+\n\n";
			cout << "______________________\n";
			cin >> Answers;

			if (Answers == (FirstEasy + SecondEasy))
			{
				cout << "Right Answers :-)\n\n\n";
				FinalResult.NumberOfRightAnswers++;
			}
			else
			{
				cout << "Wrong Answers :-(\n";
				cout << "The right answer is: " << FirstEasy + SecondEasy;
				FinalResult.NumberOfWrongAnswers++;
			}

		}

		if (Level == enLevel::Med)
		{
			cout << FirstMed << "\n";
			cout << SecondMed << "+\n\n";
			cout << "______________________\n";
			cin >> Answers;

			if (Answers == (FirstMed + SecondMed))
			{
				cout << "Right Answers :-)\n\n\n";
				FinalResult.NumberOfRightAnswers++;
			}
			else
			{
				cout << "Wrong Answers :-(\n";
				cout << "The right answer is: " << FirstMed + SecondMed;
				FinalResult.NumberOfWrongAnswers++;
			}

		}

		if (Level == enLevel::Hard)
		{
			cout << FirstHard << "\n";
			cout << SecondHard << "+\n\n";
			cout << "______________________\n";
			cin >> Answers;

			if (Answers == (FirstHard + SecondHard))
			{
				cout << "Right Answers :-)\n\n\n";
				FinalResult.NumberOfRightAnswers++;
			}
			else
			{
				cout << "Wrong Answers :-(\n";
				cout << "The right answer is: " << FirstHard + SecondHard;
				FinalResult.NumberOfWrongAnswers++;
			}

		}

		if (Level == enLevel::Mix)
		{
			cout << FirstMix << "\n";
			cout << SecondMix << "+\n\n";
			cout << "______________________\n";
			cin >> Answers;

			if (Answers == (FirstMix + SecondMix))
			{
				cout << "Right Answers :-)\n\n\n";
				FinalResult.NumberOfRightAnswers++;
			}
			else
			{
				cout << "Wrong Answers :-(\n";
				cout << "The right answer is: " << FirstMix + SecondMix;
				FinalResult.NumberOfWrongAnswers++;
			}

		}

	}

	return FinalResult;
}
strFinalResult OperationsType_Sub() {

	enTypeOperation TypeOperation = ReadOperationType();
	enLevel Level = ReadQuestionsLevel();
	strFinalResult FinalResult;

	short Answers = 0;


	short FirstEasy = ReadRandomNumber(1, 10);
	short SecondEasy = ReadRandomNumber(1, 10);

	short FirstMed = ReadRandomNumber(10, 100);
	short SecondMed = ReadRandomNumber(10, 100);

	short FirstHard = ReadRandomNumber(100, 1000);
	short SecondHard = ReadRandomNumber(100, 1000);

	short FirstMix = ReadRandomNumber(1000, 10000);
	short SecondMix = ReadRandomNumber(1000, 10000);


	if (TypeOperation == enTypeOperation::Sub) {

		if (Level == enLevel::Easy)
		{
			cout << FirstEasy << "\n";
			cout << SecondEasy << "-\n\n";
			cout << "______________________\n";
			cin >> Answers;

			if (Answers == (FirstEasy - SecondEasy))
			{
				cout << "Right Answers :-)\n\n\n";
				FinalResult.NumberOfRightAnswers++;
			}
			else
			{
				cout << "Wrong Answers :-(\n";
				cout << "The right answer is: " << FirstEasy - SecondEasy;
				FinalResult.NumberOfWrongAnswers++;
			}

		}

		if (Level == enLevel::Med)
		{
			cout << FirstMed << "\n";
			cout << SecondMed << "-\n\n";
			cout << "______________________\n";
			cin >> Answers;

			if (Answers == (FirstMed - SecondMed))
			{
				cout << "Right Answers :-)\n\n\n";
				FinalResult.NumberOfRightAnswers++;
			}
			else
			{
				cout << "Wrong Answers :-(\n";
				cout << "The right answer is: " << FirstMed - SecondMed;
				FinalResult.NumberOfWrongAnswers++;
			}

		}

		if (Level == enLevel::Hard)
		{
			cout << FirstHard << "\n";
			cout << SecondHard << "-\n\n";
			cout << "______________________\n";
			cin >> Answers;

			if (Answers == (FirstHard - SecondHard))
			{
				cout << "Right Answers :-)\n\n\n";
				FinalResult.NumberOfRightAnswers++;
			}
			else
			{
				cout << "Wrong Answers :-(\n";
				cout << "The right answer is: " << FirstHard - SecondHard;
				FinalResult.NumberOfWrongAnswers++;
			}

		}

		if (Level == enLevel::Mix)
		{
			cout << FirstMix << "\n";
			cout << SecondMix << "-\n\n";
			cout << "______________________\n";
			cin >> Answers;

			if (Answers == (FirstMix - SecondMix))
			{
				cout << "Right Answers :-)\n\n\n";
				FinalResult.NumberOfRightAnswers++;
			}
			else
			{
				cout << "Wrong Answers :-(\n";
				cout << "The right answer is: " << FirstMix - SecondMix;
				FinalResult.NumberOfWrongAnswers++;
			}

		}

	}

	return FinalResult;
}
strFinalResult OperationsType_Mul() {

	enTypeOperation TypeOperation = ReadOperationType();
	enLevel Level = ReadQuestionsLevel();
	strFinalResult FinalResult;

	short Answers = 0;


	short FirstEasy = ReadRandomNumber(1, 10);
	short SecondEasy = ReadRandomNumber(1, 10);

	short FirstMed = ReadRandomNumber(10, 100);
	short SecondMed = ReadRandomNumber(10, 100);

	short FirstHard = ReadRandomNumber(100, 1000);
	short SecondHard = ReadRandomNumber(100, 1000);

	short FirstMix = ReadRandomNumber(1000, 10000);
	short SecondMix = ReadRandomNumber(1000, 10000);


	if (TypeOperation == enTypeOperation::Mul) {

		if (Level == enLevel::Easy)
		{
			cout << FirstEasy << "\n";
			cout << SecondEasy << "*\n\n";
			cout << "______________________\n";
			cin >> Answers;

			if (Answers == (FirstEasy * SecondEasy))
			{
				cout << "Right Answers :-)\n\n\n";
				FinalResult.NumberOfRightAnswers++;
			}
			else
			{
				cout << "Wrong Answers :-(\n";
				cout << "The right answer is: " << FirstEasy * SecondEasy;
				FinalResult.NumberOfWrongAnswers++;
			}

		}

		if (Level == enLevel::Med)
		{
			cout << FirstMed << "\n";
			cout << SecondMed << "*\n\n";
			cout << "______________________\n";
			cin >> Answers;

			if (Answers == (FirstMed * SecondMed))
			{
				cout << "Right Answers :-)\n\n\n";
				FinalResult.NumberOfRightAnswers++;
			}
			else
			{
				cout << "Wrong Answers :-(\n";
				cout << "The right answer is: " << FirstMed * SecondMed;
				FinalResult.NumberOfWrongAnswers++;
			}

		}

		if (Level == enLevel::Hard)
		{
			cout << FirstHard << "\n";
			cout << SecondHard << "*\n\n";
			cout << "______________________\n";
			cin >> Answers;

			if (Answers == (FirstHard * SecondHard))
			{
				cout << "Right Answers :-)\n\n\n";
				FinalResult.NumberOfRightAnswers++;
			}
			else
			{
				cout << "Wrong Answers :-(\n";
				cout << "The right answer is: " << FirstHard * SecondHard;
				FinalResult.NumberOfWrongAnswers++;
			}

		}

		if (Level == enLevel::Mix)
		{
			cout << FirstMix << "\n";
			cout << SecondMix << "*\n\n";
			cout << "______________________\n";
			cin >> Answers;

			if (Answers == (FirstMix * SecondMix))
			{
				cout << "Right Answers :-)\n\n\n";
				FinalResult.NumberOfRightAnswers++;
			}
			else
			{
				cout << "Wrong Answers :-(\n";
				cout << "The right answer is: " << FirstMix * SecondMix;
				FinalResult.NumberOfWrongAnswers++;
			}

		}

	}

	return FinalResult;
}
strFinalResult OperationsType_Div() {

	enTypeOperation TypeOperation = ReadOperationType();
	enLevel Level = ReadQuestionsLevel();
	strFinalResult FinalResult;

	short Answers = 0;

	short FirstEasy = ReadRandomNumber(1, 10);
	short SecondEasy = ReadRandomNumber(1, 10);

	short FirstMed = ReadRandomNumber(10, 100);
	short SecondMed = ReadRandomNumber(10, 100);

	short FirstHard = ReadRandomNumber(100, 1000);
	short SecondHard = ReadRandomNumber(100, 1000);

	short FirstMix = ReadRandomNumber(1000, 10000);
	short SecondMix = ReadRandomNumber(1000, 10000);


	if (TypeOperation == enTypeOperation::Div) {

		if (Level == enLevel::Easy)
		{
			cout << FirstEasy << "\n";
			cout << SecondEasy << "/\n\n";
			cout << "______________________\n";
			cin >> Answers;

			if (Answers == (FirstEasy / SecondEasy))
			{
				cout << "Right Answers :-)\n\n\n";
				FinalResult.NumberOfRightAnswers++;
			}
			else
			{
				cout << "Wrong Answers :-(\n";
				cout << "The right answer is: " << FirstEasy / SecondEasy;
				FinalResult.NumberOfWrongAnswers++;
			}

		}

		if (Level == enLevel::Med)
		{
			cout << FirstMed << "\n";
			cout << SecondMed << "/\n\n";
			cout << "______________________\n";
			cin >> Answers;

			if (Answers == (FirstMed / SecondMed))
			{
				cout << "Right Answers :-)\n\n\n";
				FinalResult.NumberOfRightAnswers++;
			}
			else
			{
				cout << "Wrong Answers :-(\n";
				cout << "The right answer is: " << FirstMed / SecondMed;
				FinalResult.NumberOfWrongAnswers++;
			}

		}

		if (Level == enLevel::Hard)
		{
			cout << FirstHard << "\n";
			cout << SecondHard << "/\n\n";
			cout << "______________________\n";
			cin >> Answers;

			if (Answers == (FirstHard / SecondHard))
			{
				cout << "Right Answers :-)\n\n\n";
				FinalResult.NumberOfRightAnswers++;
			}
			else
			{
				cout << "Wrong Answers :-(\n";
				cout << "The right answer is: " << FirstHard / SecondHard;
				FinalResult.NumberOfWrongAnswers++;
			}

		}

		if (Level == enLevel::Mix)
		{
			cout << FirstMix << "\n";
			cout << SecondMix << "/\n\n";
			cout << "______________________\n";
			cin >> Answers;

			if (Answers == (FirstMix / SecondMix))
			{
				cout << "Right Answers :-)\n\n\n";
				FinalResult.NumberOfRightAnswers++;
			}
			else
			{
				cout << "Wrong Answers :-(\n";
				cout << "The right answer is: " << FirstMix / SecondMix;
				FinalResult.NumberOfWrongAnswers++;
			}

		}

	}

	return FinalResult;
}
strFinalResult OperationsType_Mix() {

	strFinalResult FinalResult;

	enTypeOperation randomOp = enTypeOperation(ReadRandomNumber(1, 4));

	switch (randomOp) {
	case enTypeOperation::Add:
		FinalResult = OperationsType_Add();
		break;
	case enTypeOperation::Sub:
		FinalResult = OperationsType_Sub();
		break;
	case enTypeOperation::Mul:
		FinalResult = OperationsType_Mul();
		break;
	case enTypeOperation::Div:
		FinalResult = OperationsType_Div();
		break;
	}

	return FinalResult;
}
strFinalResult SumAllOperationTypeResult() {

	strFinalResult R1 = OperationsType_Add();
	strFinalResult R2 = OperationsType_Sub();
	strFinalResult R3 = OperationsType_Mul();
	strFinalResult R4 = OperationsType_Div();
	strFinalResult R5 = OperationsType_Mix();

	strFinalResult FinalResult;

	FinalResult.NumberOfRightAnswers =
		R1.NumberOfRightAnswers + R2.NumberOfRightAnswers + R3.NumberOfRightAnswers + R4.NumberOfRightAnswers + R5.NumberOfRightAnswers;

	FinalResult.NumberOfWrongAnswers =
		R1.NumberOfWrongAnswers + R2.NumberOfWrongAnswers + R3.NumberOfWrongAnswers + R4.NumberOfWrongAnswers + R5.NumberOfWrongAnswers;

	return FinalResult;
}

void FinalScreen() {

	strFinalResult TotalResult = SumAllOperationTypeResult();

	cout << "-----------------------------------\n";
	if (TotalResult.NumberOfRightAnswers > TotalResult.NumberOfWrongAnswers)
	{
		cout << "Final Result is Correct :-)\n";
	}
	else
	{
		cout << "Final Result is Fail :-(\n";
	}

	cout << "------------------------------------\n";
}

strFinalResult PrintEndResult() {

	strFinalResult FinalResult;
	strFinalResult TotalResult = SumAllOperationTypeResult();


	FinalResult.NumberQuestions = ReadHowManyQuestions();
	FinalResult.QuestionsLevel = ReadQuestionsLevel();
	FinalResult.OpType = ReadOperationType();
	FinalResult.NumberOfRightAnswers = TotalResult.NumberOfRightAnswers;
	FinalResult.NumberOfWrongAnswers = TotalResult.NumberOfWrongAnswers;

	cout << "Number of Questions     : " << FinalResult.NumberQuestions << "\n";
	cout << "Questions Level         : " << FinalResult.QuestionsLevel << "\n";
	cout << "OpType                  : " << FinalResult.OpType << "\n";
	cout << "Number of Right Answers : " << TotalResult.NumberOfRightAnswers << "\n";
	cout << "Number of wrong Answers : " << TotalResult.NumberOfWrongAnswers << "\n";
	cout << "-------------------------------------\n";

	return FinalResult;
}
void GameContent(short ReadHowManyQuesions) {

	strFinalResult TotalResult; 

	enTypeOperation OpType = ReadOperationType(); 
	enLevel Level = ReadQuestionsLevel();         

	for (int i = 1; i <= ReadHowManyQuesions; i++)
	{
		cout << "\n-----------------------------------\n";
		cout << "Question [" << i << "/" << ReadHowManyQuesions << "]\n";

		strFinalResult RoundResult; 

		if (OpType == enTypeOperation::MixOp)
		{
			RoundResult = OperationsType_Mix();
		}
		else if (OpType == enTypeOperation::Add)
		{
			RoundResult = OperationsType_Add();
		}
		else if (OpType == enTypeOperation::Sub)
		{
			RoundResult = OperationsType_Sub();
		}
		else if (OpType == enTypeOperation::Mul)
		{
			RoundResult = OperationsType_Mul();
		}
		else if (OpType == enTypeOperation::Div)
		{
			RoundResult = OperationsType_Div();
		}

		
		TotalResult.NumberOfRightAnswers += RoundResult.NumberOfRightAnswers;
		TotalResult.NumberOfWrongAnswers += RoundResult.NumberOfWrongAnswers;


	}
	FinalScreen();
	PrintEndResult();

}

void ResetScreen()
{

	system("cls");
	system("color 0F");

}

void PlayGame() {

	char Choise;

	do {

		ResetScreen();
		GameContent(ReadHowManyQuestions());

		cout << "Do you Want to play again: Y/N ?";
		cin >> Choise;
	} while (Choise == 'y' || Choise == 'Y');

}

int main() {
	srand((unsigned)time(NULL));

	PlayGame();

	return 0;
}
```

### <font color="#ffff00">Abu-Hedhoud: New solution</font>
```cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enQuestionsLevel { EasyLevel = 1, MedLevel = 2, HardLevel = 3, Mix = 4 };
enum enOperationType { Add = 1, Sub = 2, Mult = 3, Div = 4, MixOp = 5 };

int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

string GetOpTypeSymbol(enOperationType OpType)
{
    switch (OpType)
    {
    case enOperationType::Add:
        return "+";
    case enOperationType::Sub:
        return "-";
    case enOperationType::Mult:
        return "x";
    case enOperationType::Div:
        return "/";
    default:
        return "Mix";
    }
}

enOperationType GetRandomOperationType()
{
    return (enOperationType)RandomNumber(1, 4);
}

string GetQuestionLevelText(enQuestionsLevel QuestionLevel)
{
    string arrQuestionLevelText[4] = { "Easy","Medium","Hard","Mixed" };
    return arrQuestionLevelText[QuestionLevel - 1];
}

void SetScreenColor(bool Right)
{
    if (Right)
        system("color 2F");
    else
    {
        system("color 4F");
        cout << "\a";
    }
}

int SimpleCalculator(int Number1, int Number2, enOperationType OpType)
{
    switch (OpType)
    {
    case enOperationType::Add:
        return Number1 + Number2;
    case enOperationType::Sub:
        return Number1 - Number2;
    case enOperationType::Mult:
        return Number1 * Number2;
    case enOperationType::Div:
        return (Number2 != 0) ? (Number1 / Number2) : 0;
    default:
        return Number1 + Number2;
    }
}

struct stQuestion
{
    int Number1 = 0;
    int Number2 = 0;
    enOperationType OperationType;
    enQuestionsLevel QuestionLevel;
    int CorrectAnswer = 0;
    int PlayerAnswer = 0;
    bool AnswerResult = false;
};

struct stQuizz
{
    stQuestion QuestionList[100];
    short NumberOfQuestions;
    enQuestionsLevel QuestionsLevel;
    enOperationType OpType;
    short NumberOfWrongAnswers = 0;
    short NumberOfRightAnswers = 0;
    bool isPass = false;
};

stQuestion GenerateQuestion(enQuestionsLevel QuestionLevel, enOperationType OpType)
{
    stQuestion Question;

    if (QuestionLevel == enQuestionsLevel::Mix)
        QuestionLevel = (enQuestionsLevel)RandomNumber(1, 3);

    if (OpType == enOperationType::MixOp)
        OpType = GetRandomOperationType();

    Question.OperationType = OpType;

    switch (QuestionLevel)
    {
    case enQuestionsLevel::EasyLevel:
        Question.Number1 = RandomNumber(1, 10);
        Question.Number2 = RandomNumber(1, 10);
        break;
    case enQuestionsLevel::MedLevel:
        Question.Number1 = RandomNumber(10, 50);
        Question.Number2 = RandomNumber(10, 50);
        break;
    case enQuestionsLevel::HardLevel:
        Question.Number1 = RandomNumber(50, 100);
        Question.Number2 = RandomNumber(50, 100);
        break;
    }

    Question.CorrectAnswer = SimpleCalculator(Question.Number1, Question.Number2, Question.OperationType);
    Question.QuestionLevel = QuestionLevel;

    return Question;
}

void AskAndCorrectQuestionListAnswers(stQuizz& Quizz)
{
    for (short QuestionNumber = 0; QuestionNumber < Quizz.NumberOfQuestions; QuestionNumber++)
    {
        cout << "\nQuestion [" << QuestionNumber + 1 << "/" << Quizz.NumberOfQuestions << "]\n";
        cout << Quizz.QuestionList[QuestionNumber].Number1 << " "
            << GetOpTypeSymbol(Quizz.QuestionList[QuestionNumber].OperationType) << " "
            << Quizz.QuestionList[QuestionNumber].Number2 << " = ";

        cin >> Quizz.QuestionList[QuestionNumber].PlayerAnswer;

        if (Quizz.QuestionList[QuestionNumber].PlayerAnswer == Quizz.QuestionList[QuestionNumber].CorrectAnswer)
        {
            cout << "Correct!\n";
            Quizz.NumberOfRightAnswers++;
        }
        else
        {
            cout << "Wrong! Correct Answer: " << Quizz.QuestionList[QuestionNumber].CorrectAnswer << endl;
            Quizz.NumberOfWrongAnswers++;
        }
    }

    Quizz.isPass = (Quizz.NumberOfRightAnswers >= Quizz.NumberOfWrongAnswers);
}

void PlayMathGame()
{
    stQuizz Quizz;
    Quizz.NumberOfQuestions = 5;
    Quizz.QuestionsLevel = enQuestionsLevel::EasyLevel;
    Quizz.OpType = enOperationType::MixOp;

    for (short QuestionNumber = 0; QuestionNumber < Quizz.NumberOfQuestions; QuestionNumber++)
    {
        Quizz.QuestionList[QuestionNumber] = GenerateQuestion(Quizz.QuestionsLevel, Quizz.OpType);
    }

    AskAndCorrectQuestionListAnswers(Quizz);

    cout << "\nQuiz Completed! Right Answers: " << Quizz.NumberOfRightAnswers
        << ", Wrong Answers: " << Quizz.NumberOfWrongAnswers << "\n";

    cout << (Quizz.isPass ? "You Passed the Quiz!\n" : "You Failed the Quiz!\n");
}

int main()
{
    srand((unsigned)time(NULL));
    PlayMathGame();
    return 0;
}

```
---
