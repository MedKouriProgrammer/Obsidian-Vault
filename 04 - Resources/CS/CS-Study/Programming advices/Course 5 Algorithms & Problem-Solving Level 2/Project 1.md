---
creation_date: 2025-09-01T12:26
tags:
  - Resources/Articles
Resource:
Author: "[[abu-hedhoud]]"
topic: "[[04 - Resources/CS/CS-Study/Programming advices/Course 5 Algorithms & Problem-Solving Level 2/Project 1]]"
---
> [!summary]-
> 

# <font color="#ffff00"><u>Project 1 of Course 5.</u></font>
---
## <font color="#de7802">Problem of Project :</font>
![[2025-09-01 1.png]]
![[2025-09-01 (1).png]]

---
## <font color="#00b050">Solution :</font>
### <font color="#ffff00">My Input: </font>
```cpp
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enGameprograme {

	Stone = 1, Paper = 2, Scissor = 3
};

string ReverseEnumToString[3]{

	"Stone","Paper","Scissor"
};

int ReadRandomNumber(int from, int to) {

	int RandNamer = rand() % (to - from + 1) + from;

	return RandNamer;
}
void StartGame(int &arrlength) {

	cout << "How many rounds from 1 to 10: ";
	cin >> arrlength;
}
void PlayerSetup(int arrUserChoise[100], int Round) {

	
		cout << "\nRounds [" << Round + 1 << "] begins: ";
		cout << "\nYour Choise by using Number: " << "[1]: Stone <-> [2]: Paper <-> [3]: Scissor: ";
		cin >> arrUserChoise[Round];

		cout << "\n------------------------- Round[" << Round + 1 << "] ----------------------------\n";

		if (arrUserChoise[Round] >= 1 && arrUserChoise[Round] <= 3)
		{
			cout << "Player Choise: ";
			cout << ReverseEnumToString[arrUserChoise[Round] - 1] << "\n";
		}
		else
		{
			cout << "Error :( <You Should chose from 1 to 3.>\n";
		}

		
	
}
void ComputerSetup(int arrComputerChoise[100], int Round) {


			arrComputerChoise[Round] = ReadRandomNumber(1, 3);

			cout << "Computer Choise: " << ReverseEnumToString[arrComputerChoise[Round] - 1] << "\n";
		

}
void FillPlayerVSComputer(int arrUserChoise[100], int arrComputerChoise[100], int Round) {


		if (arrUserChoise[Round] == arrComputerChoise[Round])
		{
			cout << "Round Winner: [Draw]";
		}
		else if ((arrUserChoise[Round] == 1 && arrComputerChoise[Round] == 3) ||
			(arrUserChoise[Round] == 2 && arrComputerChoise[Round] == 1) ||
			(arrUserChoise[Round] == 3 && arrComputerChoise[Round] == 2))
		{
			cout << "Round Winner: [User Winner]";
		}
		else
		{
			cout << "Round Winner: [Computer Winner]";
		}

		cout << "\n--------------------------------------------------------------\n";
	

}
void GameOver(int arrUserChoise[100], int arrComputerChoise[100], int Round) {

	int PlayerWin = 0, ComputerWin = 0, Draw = 0;

	cout << "\n                                  -------------------------------------------------------------\n";
	cout << "\n                                                     +++ G a m e  O v e r +++\n";
	cout << "\n                                  -------------------------------------------------------------\n";
	cout << "\n                                  ------------------------[ Game Results ]---------------------\n";
	cout << "                                  Game Rounds:         " << Round << "\n";
	for (int i = 0; i < Round; i++)
	{
		if (arrUserChoise[i] == arrComputerChoise[i])
		{
			Draw++;
		}
		else if ((arrUserChoise[i] == 1 && arrComputerChoise[i] == 3) ||
			(arrUserChoise[i] == 2 && arrComputerChoise[i] == 1) ||
			(arrUserChoise[i] == 3 && arrComputerChoise[i] == 2))
		{
			PlayerWin++;
		}
		else 
		{
			ComputerWin++;

		}
		
	}

	cout << "                                  Draw Times:          " << Draw << "\n";
	cout << "                                  Player Won Times:    " << PlayerWin << "\n";
	cout << "                                  Computer Won Times : " << ComputerWin << "\n";

	if (PlayerWin > ComputerWin)
	{
		cout << "\n                                  Final Winner:      Player Winner\n";
	}
	else if (PlayerWin < ComputerWin)
	{
		cout << "\n                                  Final Winner:      Computer Winner\n";
	}
	else
	{
		cout << "\n                                  FinalWinner:       No Winner\n";
	}
	cout << "\n                                 --------------------------------------------------------------\n";
}
void RestartGame(int arrlength) {

	char RegameChoise;

	cout << "Do you want to play again? Y/N? : \n";
	cin >> RegameChoise;

	

}
int main() {
	
	srand((unsigned)time(NULL));
		
	char RegameChoise = 'Y';
	while (RegameChoise == 'Y' || RegameChoise == 'y')
	{
		int arrlength = 0;
		int arrUserChoise[100], arrComputerChoise[100];

		StartGame(arrlength);

		for (int i = 0; i < arrlength; i++) {
			PlayerSetup(arrUserChoise, i);
			ComputerSetup(arrComputerChoise, i);
			FillPlayerVSComputer(arrUserChoise, arrComputerChoise, i);
		}

		GameOver(arrUserChoise, arrComputerChoise, arrlength);
		RestartGame(arrlength);
		cout << endl;
	}
	
	
	return 0;
}
```
### <font color="#ffff00">My Input: Achieve [[abu-hedhoud]] solution.</font>
```cpp
#include<iostream>
#include<cstdlib>
using namespace std;

enum enGameChoice { 
	Stone = 1, Paper = 2, Scissors = 3 
};
enum enWinner { 
	Player1 = 1, Computer = 2, Draw = 3 
};

struct stRoundInfo
{
	short RoundNumbers = 0;
	enGameChoice Player1Choice;
	enGameChoice ComputerChoice;
	enWinner Winner;
	string WinnerName;
};
struct stGameResults
{
	short GameRounds = 0;
	short Player1WinTimes = 0;
	short Computer2WinTimes = 0;
	short DrawTimes = 0;
	enWinner GameWinner;
	string WinnerName = "";
};
int ReadRandomNumber(int from, int to) {

	int RandNamer = rand() % (to - from + 1) + from;

	return RandNamer;
}
short ReadHowManyRounds()
{

	short GameRounds = 1;

	do
	{
		cout << "How Many Rounds 1 to 10 ? \n";
		cin >> GameRounds;
	} while (GameRounds < 1 || GameRounds > 10);

	return GameRounds;

}
enGameChoice ReadPlayer1Choice() {

	short Choice = 1;
	do
	{
		cout << "\nYour Choice: [1]:Stone, [2]: Paper, [3]:Scissors ? ";
		cin >> Choice;
	} while (Choice < 1 || Choice >3);

	return (enGameChoice)Choice;
}
enGameChoice GetComputerChoice() {

	return (enGameChoice)ReadRandomNumber(1, 3);
}
enWinner WhoWonTheRound(stRoundInfo RoundInfo) {

	if (RoundInfo.Player1Choice == RoundInfo.ComputerChoice)
		return enWinner::Draw;



	switch (RoundInfo.Player1Choice)
	{
	case enGameChoice::Stone:
		if (RoundInfo.ComputerChoice == enGameChoice::Paper)
		{
			return enWinner::Computer;
		}
		break;

	case enGameChoice::Paper:
		if (RoundInfo.ComputerChoice == enGameChoice::Scissors)
		{
			return enWinner::Computer;
		}
		break;

	case enGameChoice::Scissors:
		if (RoundInfo.ComputerChoice == enGameChoice::Stone)
		{
			return enWinner::Computer;
		}
		break;

	}

	return enWinner::Player1;
}
string WinnerName(enWinner Winner) {

	string arrWinnerName[3] = { "Player1", "Computer", "Draw"};
	return arrWinnerName[Winner - 1];
}
string GetTabs(short Number0fTabs) {

	string t = "";

	for (int i = 1; i <= Number0fTabs; i++)
	{
		t = t + "\t";
		
	}

	return t;
}
enWinner WhoWonTheGame(short Player1WinTimes, short Computer2WinTimes) {

	if (Player1WinTimes > Computer2WinTimes)
	{
		return enWinner::Player1;
	}
	else if (Player1WinTimes < Computer2WinTimes)
	{
		return enWinner::Computer;
	}
	else
	{
		return enWinner::Draw;
	}


}
void ShowGameOverScreen() {

	cout << "\n________________________________________________________________________________________________________________________\n";
	cout << GetTabs(2) << "+++ G a m e O v e r +++";
	cout << "\n________________________________________________________________________________________________________________________\n";
}
stGameResults FillGameResult(int GameRounds, short Player1WinTimes, short Computer2WinTimes, short DrawTimes) {
	stGameResults GameResult;

	GameResult.GameRounds = GameRounds;
	GameResult.Player1WinTimes = Player1WinTimes;
	GameResult.Computer2WinTimes = Computer2WinTimes;
	GameResult.DrawTimes = DrawTimes;
	GameResult.GameWinner = WhoWonTheGame(Player1WinTimes, Computer2WinTimes);
	GameResult.WinnerName = WinnerName(GameResult.GameWinner);

	return GameResult;
}
void SetWinnerScreenColor(enWinner Winner) {

	switch (Winner)
	{
	case enWinner::Player1:

		system("color 2F");
		break;

	case enWinner::Computer:
		system("color 4F");
		cout << "\a";
		break;

	default:
		system("color 6F");
		break;
	}


}
string ChoiceName(enGameChoice Choice) {

	string arrGameChoices[3] = { "Stone", "Paper", "Scissors" };
	return arrGameChoices[Choice - 1];
}
void PrintRoundResults(stRoundInfo RoundInfo) {

	cout << "\n_____________________ Round [" << RoundInfo.RoundNumbers << "] _____________________\n\n";
	cout << "Player1 Choice:   " << ChoiceName(RoundInfo.Player1Choice) << endl;
	cout << "Computer Choice:   " << ChoiceName(RoundInfo.ComputerChoice) << endl;
	cout << "Round Winner     :   [" << RoundInfo.WinnerName << "] \n";
	cout << "_____________________________________________________\n" << endl;

	SetWinnerScreenColor(RoundInfo.Winner);
}
stGameResults PlayGame(short HowManyRounds) {

	stRoundInfo RoundInfo;

	short Player1WinTimes = 0, Computer2WinTimes = 0, DrawTimes = 0;
	for (int RoundNumber = 1; RoundNumber <= HowManyRounds; RoundNumber++)
	{
		cout << "\n____________ Round [ " << RoundNumber << " ] ____________\n";
		RoundInfo.RoundNumbers = RoundNumber;
		RoundInfo.Player1Choice = ReadPlayer1Choice();
		RoundInfo.ComputerChoice = GetComputerChoice();
		RoundInfo.Winner = WhoWonTheRound(RoundInfo);
		RoundInfo.WinnerName = WinnerName(RoundInfo.Winner);

		if (RoundInfo.Winner == enWinner::Player1)
		{
			Player1WinTimes++;
		}
		else if (RoundInfo.Winner == enWinner::Computer)
		{
			Computer2WinTimes++;
		}
		else
		{
			DrawTimes++;
		}

		PrintRoundResults(RoundInfo);
	}

	return FillGameResult(HowManyRounds, Player1WinTimes, Computer2WinTimes, DrawTimes);
}
void ResetScreen()
{

	system("cls");
	system("color 0F");

}
void ShowFinalGameResults(stGameResults GameResults)
{
	cout << GetTabs(2) << "_____________________ [Game Results ] _____________________ \n\n";
	cout << GetTabs(2) << "Game Rounds            :  " << GameResults.GameRounds << endl;
	cout << GetTabs(2) << "Player1 won times      :  " << GameResults.Player1WinTimes << endl;
	cout << GetTabs(2) << "Computer won times     :  " << GameResults.Computer2WinTimes << endl;
	cout << GetTabs(2) << "Draw times             :  " << GameResults.DrawTimes << endl;
	cout << GetTabs(2) << "Final Winner           :  " << GameResults.WinnerName << endl;
	cout << GetTabs(2) << "___________________________________________________________\n\n";

	SetWinnerScreenColor(GameResults.GameWinner);
}
void StartGame() {

	char PlayAgain;
	
	do
	{
		ResetScreen();
		stGameResults GameResult = PlayGame(ReadHowManyRounds());
		ShowGameOverScreen();
		ShowFinalGameResults(GameResult);
		cout << endl << GetTabs(3) << "Do you want to play again? Y/N? ";
		cin >> PlayAgain;
	} while (PlayAgain == 'y' || PlayAgain == 'Y');
}
int main() {
	srand((unsigned)time(NULL));

	StartGame();

	return 0;
}
```
---
### <font color="#ffff00">Abu-Hedhoud: old solution</font>
```cpp
#include<iostream>
#include<cstdlib>
using namespace std;

enum enGameChoice { Stone = 1, Paper = 2, Scissors = 3 };
enum enWinner { Player1 = 1, Computer = 2, Draw = 3 };

struct stRoundInfo
{
	short RoundNumber = 0;
	enGameChoice Player1Choice;
	enGameChoice ComputerChoice;
	enWinner Winner;
	string WinnerName;
};

struct stGameResults
{
	short GameRounds = 0;
	short Player1WinTimes = 0;
	short Computer2WinTimes = 0;
	short DrawTimes = 0;
	enWinner GameWinner;
	string WinnerName = "";
};

int ReadRandomNumber(int from, int to) {

	int RandNamer = rand() % (to - from + 1) + from;

	return RandNamer;
}

string WinnerName(enWinner Winner)
{
	string arrWinnerName[3] = { "PLayer1", "Computer", "No Winner" };
	return arrWinnerName[Winner - 1];
}

enWinner WhoWonTheRound(stRoundInfo RoundInfo) {

	if (RoundInfo.Player1Choice == RoundInfo.ComputerChoice)
	return enWinner::Draw;



	switch (RoundInfo.Player1Choice)
	{
	case enGameChoice::Stone:
		if (RoundInfo.ComputerChoice == enGameChoice::Paper)
		{
			return enWinner::Computer;
		}
		break;

	case enGameChoice::Paper:
		if (RoundInfo.ComputerChoice == enGameChoice::Scissors)
		{
			return enWinner::Computer;
		}
		break;

	case enGameChoice::Scissors:
		if (RoundInfo.ComputerChoice == enGameChoice::Stone)
		{
			return enWinner::Computer;
		}
		break;

	}

	return enWinner::Player1;
}

string ChoiceName(enGameChoice Choice)
{
	string arrGameChoices[3] = { "Stone", "Paper", "Scissors" };
	return arrGameChoices[Choice - 1];
}


void SetWinnerScreenColor(enWinner Winner) {

	switch(Winner)
	{
		case enWinner::Player1:
	
		system("color 2F");
		break;

		case enWinner::Computer:
			system("color 4F");
			cout << "\a";
			break;

		default:
			system("color 6F");
			break;
	}


}


void PrintRoundResults(stRoundInfo RoundInfo)
{
	cout << "\n_____________________ Round [" << RoundInfo.RoundNumber << "] _____________________\n\n";
	cout << "Player1 Choice:   " << ChoiceName(RoundInfo.Player1Choice) << endl;
	cout << "Computer Choice:   " << ChoiceName(RoundInfo.ComputerChoice) << endl;
	cout << "Round Winner     :   [" << RoundInfo.WinnerName << "] \n";
	cout << "_____________________________________________________\n" << endl;

	SetWinnerScreenColor(RoundInfo.Winner);
}


enWinner WhoWonTheGame(short Player1WinTimes, short ComputerWinTimes)
{
	if (Player1WinTimes > ComputerWinTimes)
		return enWinner::Player1;
	else if (ComputerWinTimes > Player1WinTimes)
		return enWinner::Computer;
	else
		return enWinner::Draw;
}


stGameResults FillGameResults(int GameRounds, short Player1WinTimes, short ComputerWinTimes, short DrawTimes) {

	stGameResults GameResults;

	GameResults.GameRounds = GameRounds;
	GameResults.Player1WinTimes = Player1WinTimes;
	GameResults.Computer2WinTimes = ComputerWinTimes;
	GameResults.DrawTimes = DrawTimes;
	GameResults.GameWinner = WhoWonTheGame(Player1WinTimes, ComputerWinTimes);
		GameResults.WinnerName = WinnerName(GameResults.GameWinner);

	return GameResults;
}


enGameChoice ReadPlayer1Choice() {

	short Choice = 1;
	do
	{
		cout << "\nYour Choice: [1]:Stone, [2]: Paper, [3]:Scissors ? ";
		cin >> Choice;
	} while (Choice < 1 || Choice >3);

	return (enGameChoice)Choice;
}


enGameChoice GetComputerChoice() {

	return (enGameChoice)ReadRandomNumber(1, 3);
}


stGameResults PlayGame(short HowManyRounds) {

	stRoundInfo RoundInfo;

	short Player1WinTimes = 0, ComputerWinTimes = 0, DrawTimes = 0;
	for (short GameRound = 1; GameRound <= HowManyRounds; GameRound++)
	{
		cout << "\nRound [" << GameRound << "] begins : \n";
		RoundInfo.RoundNumber = GameRound;
		RoundInfo.Player1Choice = ReadPlayer1Choice();
		RoundInfo.ComputerChoice = GetComputerChoice();
		RoundInfo.Winner = WhoWonTheRound(RoundInfo);
		RoundInfo.WinnerName = WinnerName(RoundInfo.Winner);

		if (RoundInfo.Winner == enWinner::Player1)
			Player1WinTimes++;
		else if (RoundInfo.Winner == enWinner::Computer)
			ComputerWinTimes++;
		else
			DrawTimes++;

		PrintRoundResults(RoundInfo);
	}
	return FillGameResults(HowManyRounds, Player1WinTimes, ComputerWinTimes, DrawTimes);
}


string Tabs(short Number0fTabs)
{

	string t = "";

	for (int i = 1; i < Number0fTabs; i++)
	{
		t = t + "\t";
		cout << t;
	}

	return t;

}


void ShowGameOverScreen()
{
	cout << Tabs(2) << "\n________________________________________________________________________________________________________________________\n";
	cout << Tabs(2) << "                               +++ G a m e  O v e r +++\n";
	cout << Tabs(2) << "\n________________________________________________________________________________________________________________________\n";
}


void ShowFinalGameResults(stGameResults GameResults)
{
	cout << Tabs(2) << "_____________________ [Game Results ] _____________________ \n\n";

	cout << Tabs(2) << "Game Rounds            :  " << GameResults.GameRounds << endl;
	cout << Tabs(2) << "Player1 won times      :  " << GameResults.Player1WinTimes << endl;
	cout << Tabs(2) << "Computer won times     :  " << GameResults.Computer2WinTimes << endl;
	cout << Tabs(2) << "Draw times             :  " << GameResults.DrawTimes << endl;
	cout << Tabs(2) << "Final Winner           :  " << GameResults.WinnerName << endl;
	cout << Tabs(2) << "___________________________________________________________\n\n";

	SetWinnerScreenColor(GameResults.GameWinner);
}


short ReadHowManyRounds()
{

	short GameRounds = 1;

	do
	{
		cout << "How Many Rounds 1 to 10 ? \n";
		cin >> GameRounds;
	} while (GameRounds < 1 || GameRounds > 10);

	return GameRounds;

}


void ResetScreen()
{

	system("cls");
	system("color 0F");

}


void StartGame()
{

	char PlayAgain = 'Y';

		do
		{

			ResetScreen();
			stGameResults GameResults = PlayGame(ReadHowManyRounds());
			ShowGameOverScreen();
			ShowFinalGameResults(GameResults);
			cout << endl << Tabs(3) << "Do you want to play again? Y/N? ";
			cin >> PlayAgain;
		} while (PlayAgain == 'Y' || PlayAgain == 'y');

}


int main()
{
	srand((unsigned)time(NULL));

	StartGame();

	return 0;
}
```
### <font color="#ffff00">Abu-Hedhoud: New solution</font>
```cpp
#include <iostream> 
#include <cstdlib> 
#include <ctime> 
using namespace std;

enum enGameChoice { Stone = 1, Paper = 2, Scissors = 3 };
enum enWinner { Player1 = 1, Computer = 2, Draw = 3 };

struct stRoundInfo
{
	short RoundNumber = 0;
	enGameChoice Player1Choice;
	enGameChoice ComputerChoice;
	enWinner Winner;
	string WinnerName;
};

struct stGameResults
{
	short GameRounds = 0;
	short Player1WinTimes = 0;
	short ComputerWinTimes = 0;
	short DrawTimes = 0;
	enWinner GameWinner;
	string WinnerName = "";
};

int RandomNumber(int From, int To) {

	return rand() % (To - From + 1) + From;
}
enGameChoice GetComputerChoice() {

	return (enGameChoice)RandomNumber(1, 3);
}

enWinner WhoWonTheRound(stRoundInfo RoundInfo) {
	if (RoundInfo.Player1Choice == RoundInfo.ComputerChoice)
		return enWinner::Draw;
	switch (RoundInfo.Player1Choice)
	{
	case enGameChoice::Stone:
		return (RoundInfo.ComputerChoice == enGameChoice::Paper) ? enWinner::Computer : enWinner::Player1;
	case enGameChoice::Paper:
		return (RoundInfo.ComputerChoice == enGameChoice::Scissors) ? enWinner::Computer : enWinner::Player1;
	case enGameChoice::Scissors:
		return (RoundInfo.ComputerChoice == enGameChoice::Stone) ? enWinner::Computer : enWinner::Player1;
	}

}

enWinner WhoWonTheGame(short Player1WinTimes, short ComputerWinTimes)
{
	if (Player1WinTimes > ComputerWinTimes)
		return enWinner::Player1;
	else if (ComputerWinTimes > Player1WinTimes)
		return enWinner::Computer;
	else
		return enWinner::Draw;
}

string ChoiceName(enGameChoice Choice) {
	string arrGameChoices[3] = { "Stone", "Paper", "Scissors" };
	return arrGameChoices[Choice - 1];
}

string WinnerName(enWinner Winner) {
	string arrWinnerName[3] = { "Player1", "Computer", "No Winner (Draw)" }; return arrWinnerName[Winner - 1];
}

enGameChoice ReadPlayer1Choice() {
	short Choice;
	do
	{
		cout << "\nYour Choice: [1]:Stone, [2]:Paper, [3]:Scissors? ";
		cin >> Choice;
	} while (Choice < 1 || Choice > 3);
	return (enGameChoice)Choice;
}

void PrintRoundResults(stRoundInfo RoundInfo) {
	cout << "\n____________ Round [" << RoundInfo.RoundNumber << "] ____________\n\n";
	cout << "Player1 Choice: " << ChoiceName(RoundInfo.Player1Choice) << endl; cout << "Computer Choice: " << ChoiceName(RoundInfo.ComputerChoice) << endl; cout << "Round Winner : [" << RoundInfo.WinnerName << "]\n";
	cout << "_________________________________________\n" << endl;
}

stGameResults PlayGame(short HowManyRounds) {
	stRoundInfo RoundInfo; short Player1WinTimes = 0, ComputerWinTimes = 0, DrawTimes = 0;
	for (short GameRound = 1; GameRound <= HowManyRounds; GameRound++)
	{
		cout << "\nRound [" << GameRound << "] begins:\n";
		RoundInfo.RoundNumber = GameRound;
		RoundInfo.Player1Choice = ReadPlayer1Choice();
		RoundInfo.ComputerChoice = GetComputerChoice();
		RoundInfo.Winner = WhoWonTheRound(RoundInfo);
		RoundInfo.WinnerName = WinnerName(RoundInfo.Winner);
		if (RoundInfo.Winner == enWinner::Player1) Player1WinTimes++;
		else if (RoundInfo.Winner == enWinner::Computer) ComputerWinTimes++;
		else DrawTimes++;
		PrintRoundResults(RoundInfo);
	}
	return { HowManyRounds, Player1WinTimes, ComputerWinTimes, DrawTimes, WhoWonTheGame(Player1WinTimes, ComputerWinTimes), WinnerName(WhoWonTheGame(Player1WinTimes, ComputerWinTimes)) };
}

void StartGame() {
	char PlayAgain = 'Y'; do {
		system("cls");
		stGameResults GameResults = PlayGame(3);
		cout << "\nGame Over! Winner: " << GameResults.WinnerName << endl;
		cout << "\nDo you want to play again? (Y/N): ";
		cin >> PlayAgain;
	} while (PlayAgain == 'Y' || PlayAgain == 'y');
}

int main() {
	srand((unsigned)time(NULL));
	StartGame();
	return 0;
}
```
---
### <font color="#ffff00">Output:</font>
```
How many rounds from 1 to 10: 2

Rounds [1] begins:
Your Choise by using Number: [1]: Stone <-> [2]: Paper <-> [3]: Scissor: 1

------------------------- Round[1] ----------------------------
Player Choise: Stone
Computer Choise: Paper
Round Winner: [Computer Winner]
--------------------------------------------------------------

Rounds [2] begins:
Your Choise by using Number: [1]: Stone <-> [2]: Paper <-> [3]: Scissor: 2

------------------------- Round[2] ----------------------------
Player Choise: Paper
Computer Choise: Stone
Round Winner: [User Winner]
--------------------------------------------------------------

                                  -------------------------------------------------------------

                                                     +++ G a m e  O v e r +++

                                  -------------------------------------------------------------

                                  ------------------------[ Game Results ]---------------------
                                  Game Rounds:         2
                                  Draw Times:          0
                                  Player Won Times:    1
                                  Computer Won Times : 1

                                  FinalWinner:       No Winner

                                 --------------------------------------------------------------
Do you want to play again? Y/N? :
```
---
### **🔢 Equivalent Programming Problems in This Project**.
![[PJKg1vClRpKUWrnWArzQ_2.png]]
