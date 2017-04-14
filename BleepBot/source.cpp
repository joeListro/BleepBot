/* ***  Author:  Joe Listro and Sam Poquette
*  Last Update:  April 13, 2017
*     Filename:  source.cpp
*  Description:  Accepts input in the form of a text file and replaces any ‘bad’ words then saves to a file and outputs the result to a console.
*
*  Certification of Authenticity:
*     I certify that this assignment is entirely my own work.
**********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <string>
#include "resource1.h"
#include "BleepBot.cpp"

using namespace std;

void menu()
{
	BleepBot bleep = BleepBot();

	system("cls");

	char input;

	cout << "**********MAIN MENU**********\nB - BleepBot\nT = TrumpMode (Bigly!)\nL - ???\n\nE - Exit\n\n";
	cin >> input;
	if (input == 'b' || input == 'B')
	{
		system("cls");

		string badWords = bleep.fileInput("testInput3.txt");
		bleep.loadDictionary("badWordsDictionary2.txt");
		cout << "Before : \n" << badWords << "\n----------------------\n\n";
		cout << "After : \n";
		cout << bleep.convertBadWords(badWords);
		cout << "\n----------------------\n\n";
		system("pause");
		menu();
	}
	else if (input == 'T' || input == 't')
	{
		system("cls");
		PlaySound((char*)IDR_WAVE2, NULL, SND_RESOURCE | SND_ASYNC);

		string trumpWords = bleep.fileInput("testInput.txt");
		bleep.loadDictionary("trumpDictionary.txt");
		cout << bleep.convertBadWords(trumpWords);

		system("pause");
		menu();
	}
	else if (input == 'L' || input == 'l')
	{
		system("cls");
		bleep.leeroy();
		menu();
	}
	else if (input == 'E' || input == 'e')
	{
		exit(EXIT_SUCCESS);
	}
	else
	{
		system("cls");
		menu();
	}
}

int main()
{
	menu();
}