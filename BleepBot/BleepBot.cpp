/* ***  Author:  Joe Listro
*  Last Update:  April 13, 2017
*     Filename:  BleepBot.cpp
*  Description:  Handles the main functionality of the application.
*
*  Certification of Authenticity:
*     I certify that this assignment is entirely my own work.
**********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <string>
#include <array>
#include <Windows.h>
#include "resource.h"
#include "resource1.h"
#include "file_IO.cpp"

#define NUM_BAD_WORDS = 15

using namespace std;

class BleepBot {

	string badWords [25];

	string goodWords [25];

  public:

	BleepBot() {
		// Load in bad words and good words here.

		return;
	}

	string convertBadWords(string filename) {

		string text;

		file_IO fileIO = file_IO();

		text = fileIO.read(filename);

		while () {
			// replace bad words
		}
	}

	void leeroy()
	{
		string input;

		cout << "Leeroy\n";
		cin >> input;

		if (input == "Jenkins" || input == "jenkins")
			PlaySound((char*)IDR_WAVE1, NULL, SND_RESOURCE | SND_ASYNC);

		system("pause");
	}
};