#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

bool gameOver;
char pos[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int comp = NULL;
char player;
bool validInput;

//draw screen
void draw()
{
	system("cls");
	
	cout << "Player: X   Computer: O" << endl;
	cout << "'q' to quit" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << pos[1] << "  |  " << pos[2] << "  |  " << pos[3] << "  " << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << pos[4] << "  |  " << pos[5] << "  |  " << pos[6] << "  " << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << pos[7] << "  |  " << pos[8] << "  |  " << pos[9] << "  " << endl;
	cout << "     |     |     " << endl;
	if (validInput == false)
	{
		cout << "invalid input.. " << endl;
		cout << "Choose a number 1-9: " << endl;
	}
	else	

		cout << "Please choose a number 1-9 : " << endl;



}
//if user input is 1-9 (ascii 49-57) then valid = true if not it returns false
bool valid()
{
	if (player < 49 || player > 57)
	{
		validInput = false;
		return false;
	}
	else
	{
		validInput = true;
		return true;
	}
} 
//Gets the input from the player looped until a vaid choice is made
void getInput()
{
	cin >> player;
	valid();
	while (valid() == false)
	{
		validInput = false;
		draw();
		cin >> player;
		valid();
	}
	
}
//if player space is empty it marks and returns true. if space is taken it will return false 
bool checkInput()
{
	if (player == '1' && pos[1] == '1') {
		player = '`';
		pos[1] = 'X';
		return true;
	}
	else if (player == '2' && pos[2] == '2') {
		player = '`';
		pos[2] = 'X';
		return true;
	}
	else if (player == '3' && pos[3] == '3') {
		player = '`';
		pos[3] = 'X';
		return true;
	}
	else if (player == '4' && pos[4] == '4') {
		player = '`';
		pos[4] = 'X';
		return true;
	}
	else if (player == '5' && pos[5] == '5') {
		player = '`';
		pos[5] = 'X';
		return true;
	}
	else if (player == '6' && pos[6] == '6') {
		player = '`';
		pos[6] = 'X';
		return true;
	}
	else if (player == '7' && pos[7] == '7') {
		player = '`';
		pos[7] = 'X';
		return true;
	}
	else if (player == '8' && pos[8] == '8') {
		player = '`';
		pos[8] = 'X';
		return true;
	}
	else if (player == '9' && pos[9] == '9') {
		player = '`';
		pos[9] = 'X';
		return true;
	}
	else if (player == '`')
		return true;
	else
		return false;
}
//makes compter a random choice. if space is empty it marks and returns true. if space is taken it will return false.  
bool computer()
{
	//choose random number 1-9
	comp = (rand() % 9) + 1;
	//checks if computer has played on an empty space 
	if (comp == 1 && pos[1] == '1') {
		comp = '`'; 
		pos[1] = 'O';
		return true;
	}
	else if (comp == 2 && pos[2] == '2') {
		comp = '`';
		pos[2] = 'O';
		return true;
	}
	else if (comp == 3 && pos[3] == '3') {
		comp = '`';
		pos[3] = 'O';
		return true;
	}
	else if (comp == 4 && pos[4] == '4') {
		comp = '`';
		pos[4] = 'O';
		return true;
	}
	else if (comp == 5 && pos[5] == '5') {
		comp = '`';
		pos[5] = 'O';
		return true;
	}
	else if (comp == 6 && pos[6] == '6') {
		comp = '`';
		pos[6] = 'O';
		return true;
	}
	else if (comp == 7 && pos[7] == '7') {
		comp = '`';
		pos[7] = 'O';
		return true;
	}
	else if (comp == 8 && pos[8] == '8') {
		comp = '`';
		pos[8] = 'O';
		return true;
	}
	else if (comp == 9 && pos[9] == '9') {
		comp = '`';
		pos[9] = 'O';
		return true;
	}
	else if (comp == '`')
		return true;
	else
		return false;
}
// checks if comp or player has won the game 
void winTest()
{
	//used to quit the game 
	if (player == 'q')
		gameOver = true;

	//check if player has won
	if (pos[1] == 'X' && pos[2] == 'X' && pos[3] == 'X')
	{
		cout << "Player wins! " << endl;
		gameOver = true;	
	}
	else if (pos[4] == 'X' && pos[5] == 'X' && pos[6] == 'X')
	{
		cout << "Player wins! " << endl;
		gameOver = true;	
	}
	else if (pos[7] == 'X' && pos[8] == 'X' && pos[9] == 'X')
	{
		cout << "Player wins! " << endl;
		gameOver = true;
	}
	else if (pos[1] == 'X' && pos[4] == 'X' && pos[7] == 'X')
	{
		cout << "Player wins! " << endl;
		gameOver = true;
	}
	else if (pos[2] == 'X' && pos[5] == 'X' && pos[8] == 'X')
	{
		cout << "Player wins! " << endl;
		gameOver = true;
	}
	else if (pos[3] == 'X' && pos[6] == 'X' && pos[9] == 'X')
	{
		cout << "Player wins! " << endl;
		gameOver = true;
	}
	else if (pos[1] == 'X' && pos[5] == 'X' && pos[9] == 'X')
	{
		cout << "Player wins! " << endl;
		gameOver = true;
	}
	else if (pos[3] == 'X' && pos[5] == 'X' && pos[7] == 'X')
	{
		cout << "Player wins! " << endl;
		gameOver = true;
	}
	

	//Checks if Computer has won
	if (pos[1] == 'O' && pos[2] == 'O' && pos[3] == 'O')
	{
		cout << "Computer wins! " << endl;
		gameOver = true;
	}
	else if (pos[4] == 'O' && pos[5] == 'O' && pos[6] == 'O')
	{
		cout << "Computer wins! " << endl;
		gameOver = true;
	}
	else if (pos[7] == 'O' && pos[8] == 'O' && pos[9] == 'O')
	{
		cout << "Computer wins! " << endl;
		gameOver = true;
	}
	else if (pos[1] == 'O' && pos[4] == 'O' && pos[7] == 'O')
	{
		cout << "Computer wins! " << endl;
		gameOver = true;
	}
	else if (pos[2] == 'O' && pos[5] == 'O' && pos[8] == 'O')
	{
		cout << "Computer wins! " << endl;
		gameOver = true;
	}
	else if (pos[3] == 'O' && pos[6] == 'O' && pos[9] == 'O')
	{
		cout << "Computer wins! " << endl;
		gameOver = true;
	}
	else if (pos[1] == 'O' && pos[5] == 'O' && pos[9] == 'O')
	{
		cout << "Computer wins! " << endl;
		gameOver = true;
	}
	else if (pos[3] == 'O' && pos[5] == 'O' && pos[7] == 'O')
	{
		cout << "Computer wins! " << endl;
		gameOver = true;
	}
	
}
//will loop until player and computer have made a valid move on an empty space
void turn()
{
	getInput();
	checkInput();
	while (checkInput() == false) //loop untill player has chosen an empty space 
	{
		validInput = false;
		draw();
		getInput();
		checkInput();
	}
	winTest();
	bool compCheck = false;

	while (compCheck == false)
	{
		compCheck = computer();
	}
	winTest(); //check if either computer or player has won. 


}
//run game loop  
int main()
{
	while (gameOver == false)
	{
		validInput = true;
		draw();
		turn();
	}
	Sleep(3000); //wait 3 seconds then close 
	return 0;
}