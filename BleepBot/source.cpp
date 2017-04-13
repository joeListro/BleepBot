/* ***  Author:  Joe Listro and Sam Poquette
*  Last Update:  April 13, 2017
*     Filename:  source.cpp
*  Description:  Accepts input in the form of a text file and replaces any �bad� words then saves to a file and outputs the result to a console.
*
*  Certification of Authenticity:
*     I certify that this assignment is entirely my own work.
**********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <string>
#include <Windows.h>
#include "resource.h"
#include "resource1.h"
#include "BleepBot.cpp"

using namespace std;

/*void leeroy()
{
	string input;

	cout << "Leeroy\n";
	cin >> input;

	if (input == "Jenkins" || input == "jenkins")
		PlaySound((char*)IDR_WAVE1, NULL, SND_RESOURCE | SND_ASYNC);

	system("pause");
}*/

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
		
		//string badWords = bleep.fileInput();
		//cout << bleep.convertBadWords(badWords);

		system("pause");
		menu();
	}
	else if (input == 'T' || input == 't')
	{
		system("cls");
		//string trumpWords = bleep.fileInput();
		//cout << bleep.convertTrumpWords(trumpWords);

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