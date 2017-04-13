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
#include <Windows.h>
#include "resource.h"
#include "resource1.h"


using namespace std;

void menu()
{
	system("cls");

	char input;

	cout << "**********MAIN MENU**********\nB - BleepBot\nT = TrumpMode (Bigly!)\nL - ???\n\nE - Exit\n\n";
	cin >> input;
	if (input == 'b' || input == 'B')
	{
		system("cls");
		
		//string badWords = fileInput();
		//cout << convertBadWords(badWords);

		system("pause");
		menu();
	}
	else if (input == 'T' || input == 't')
	{
		system("cls");
		//string trumpWords = fileInput();
		//cout << convertTrumpWords(trumpWords);

		system("pause");
		menu();
	}
	else if (input == 'L' || input == 'l')
	{
		system("cls");
		leeroy();
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

string fileInput(string pathToFile) {
	
	string theText;

	// Read in pathToFile

	return theText;
}

int main()
{
	menu();
}