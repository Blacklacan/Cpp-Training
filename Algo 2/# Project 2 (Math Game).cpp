#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadNumber(string message) {
	int N = 0;
	cout << message << endl;
	cin >> N;
	return N;
}
int RandomNumber(int From, int To) {
	int randNumb = rand() % (To - From + 1) + From;
	return randNumb;
}
int RoundsNumber() {
	return ReadNumber("How Many Rounds do you want to Play? \n");
}
enum Items
{
	Easy = 1,
	Medium = 2,
	Hard = 3,
	Mix = 4
};
enum OpType {
	Addition = 1,
	Subtraction = 2,
	Multiply = 3,
	Division = 4,
	MixOP = 5
};
Items ReadDifficultyChoice() {
	int PChoice = ReadNumber("What is Your Choice? [1] = Easy, Medium = 2, Hard = 3, Mix = 4? \n");
	while (PChoice > 4 || PChoice < 1)
	{
		cout << "Between 1 and 4 only!! \n";
		PChoice = ReadNumber("What is Your Choice? [1] = Easy, Medium = 2, Hard = 3, Mix = 4? \n");
	}
	return Items(PChoice);
}
OpType ReadOperationType() {
	int OperationChoice = ReadNumber("What is Your Operation Type Choice? Addition = 1, Subtraction = 2, Multiply = 3, Division = 4, MixOP = 5 ? \n");
	while (OperationChoice > 5 || OperationChoice < 1)
	{
		cout << "Between 1 and 5 only!! \n";
		OperationChoice = ReadNumber("What is Your Operation Type Choice? Addition = 1, Subtraction = 2, Multiply = 3, Division = 4, MixOP = 5 ?\n");
	}
	return OpType(OperationChoice);
}
struct stRoundInfo {
	Items DiffucaltyChoice;
	OpType OperationChoice;
	int PlayerWins;
	int PlayerLosses;
};

void Question(int Var1, int Var2, OpType OperationChoice) {
	string OperationText;
	switch (OperationChoice)
	{
	case Addition:
		OperationText = '+';
		break;
	case Subtraction:
		OperationText = '-';
		break;
	case Multiply:
		OperationText = '*';
		break;
	case Division:
		OperationText = '/';
		break;
	}
	cout << "Qeustion: " << Var1 << " " << OperationText << " " << Var2 << endl;
	cout << "-------------" << endl;
}
void Diffucalty(Items Difficulty, int& Var1, int& Var2){

	switch (Difficulty)
	{
	case Easy:
		Var1 = RandomNumber(1, 10);
		Var2 = RandomNumber(1, 10);
		break;
	case Medium:
		Var1 = RandomNumber(11, 30);
		Var2 = RandomNumber(11, 30);
		break;
	case Hard:
		Var1 = RandomNumber(31, 100);
		Var2 = RandomNumber(31, 100);
		break;
	}
	
}
int CorrectAnswer(int Var1, int Var2, OpType OperationChoice) {
	int CorrectAnswer = 0;
	
	switch (OperationChoice)
	{
	case Addition:
		return CorrectAnswer = Var1 + Var2;
	case Subtraction:
		return CorrectAnswer = Var1 - Var2;
	case Multiply:
		return CorrectAnswer = Var1 * Var2;
	case Division:
		return CorrectAnswer = Var1 / Var2;
	}
	 
}
int PlayerAnswer() {
	return ReadNumber("Whats the answer?");
}
bool AnswerValidation(int PlayerAnswer, int CorrectAnswer) {
	if (PlayerAnswer == CorrectAnswer)
		return true;
	else
		return false;
}
void MainGame(int& RoundsNumber, stRoundInfo& RoundInfo) {
	int Var1, Var2;
	RoundInfo.PlayerWins = 0;
	RoundInfo.PlayerLosses = 0;
	RoundInfo.DiffucaltyChoice = ReadDifficultyChoice();
	RoundInfo.OperationChoice = ReadOperationType();
	OpType OperationInRound = OpType::Addition;
	Items DiffucaltyInRound = Items::Easy;
	for (short i = 1; i <= RoundsNumber; i++)
	{
		if (RoundInfo.OperationChoice == MixOP)
			OperationInRound = OpType(RandomNumber(1, 4));
		else
			OperationInRound = RoundInfo.OperationChoice;

		if (RoundInfo.DiffucaltyChoice == Mix)
			DiffucaltyInRound = Items(RandomNumber(1, 3));
		else
			DiffucaltyInRound = RoundInfo.DiffucaltyChoice;


		Diffucalty(DiffucaltyInRound, Var1, Var2);
		cout << "Round [" << i << "]:" << endl;
		Question(Var1, Var2, OperationInRound);
		int PAnswer = PlayerAnswer();
		int Correct = CorrectAnswer(Var1, Var2, OperationInRound);
		bool Validation = AnswerValidation(PAnswer, Correct);
		if (Validation == true) {
			RoundInfo.PlayerWins++;
			cout << "Right Answer" << endl;
			cout << "------------" << endl;
			
		}
		else {
			RoundInfo.PlayerLosses++;
			cout << "Wrong Answer" << endl;
			cout << "The Correct Answer is: " << Correct << endl;
			cout << "------------" << endl;
		}
	}
}



/*****UI Output*****/
void ResetScreen() {
	system("CLS");
	system("color 0F");
}
void GameOverScreen() {
	system("CLS");
	cout << "\t\t\t\t\t----------------------------------------\n";
	cout << "\t\t\t\t\t             ++GAME OVER++      \t" << '\n';
	cout << "\t\t\t\t\t----------------------------------------\n";
}
void FinalResult(int RoundsNumber, stRoundInfo RoundInfo) {
	GameOverScreen();
	cout << "\t\t\t\t\t Number of Rounds: " << RoundsNumber << endl;
	cout << "\t\t\t\t\t Number of Player Wins: " << RoundInfo.PlayerWins << endl;
	cout << "\t\t\t\t\t Number of Player Losses: " << RoundInfo.PlayerLosses << endl;
	if (RoundInfo.PlayerWins < RoundInfo.PlayerLosses)
	{
		cout << "\t\t\t\t\t You Lost The Game..." << endl;
		system("color 4F");
	}
	if (RoundInfo.PlayerWins > RoundInfo.PlayerLosses)
	{
		cout << "\t\t\t\t\t You Won The Game..." << endl;
		system("color 2F");
	}
	if (RoundInfo.PlayerWins == RoundInfo.PlayerLosses)
	{
		cout << "\t\t\t\t\t Its a drawn Game..." << endl;
		system("color 6F");
	}
	cout << "\t\t\t\t\t----------------------------------------\n";
}

void StartGame() {
	char Replay = 'y';
	do
	{
		stRoundInfo RoundInfo;
		int Rounds = RoundsNumber();
		
		MainGame(Rounds, RoundInfo);
		FinalResult(Rounds, RoundInfo);
		cout << "Do you want to play again? Y/n " << '\n';
		cin >> Replay;
		ResetScreen();
	} while (Replay == 'y' || Replay == 'Y');

}



int main() {
	srand((unsigned)time(NULL));

	StartGame();
	
	return 0;
}