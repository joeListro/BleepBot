/* ***  Author:  Joe Listro
*  Last Update:  April 13, 2017
*     Filename:  BleepBot.cpp
*  Description:  Handles the main functionality of the application.
*
*  Certification of Authenticity:
*     I certify that this assignment is entirely my own work.
**********************************************************************/


#include <iostream>
#include <string>
#include <Windows.h>
#include "resource1.h"
#include <fstream>
#include <streambuf>
#include <sstream>

using namespace std;

class BleepBot {

	static const int NUM_BAD_WORDS = 15;

	string badWords [NUM_BAD_WORDS];

	string goodWords [NUM_BAD_WORDS];

  public:

	BleepBot() {
		// Default constructor.
	}

	void loadDictionary(string pathToDictionary) {
		// Load in bad words and good words here.
		// Reads the format : 
		//		badWord - goodWord\n
		// Supports dictionaries with up to NUM_BAD_WORDS (= 15).
		string dictionary = fileInput(pathToDictionary);

		string curWord;

		bool goodWord = false;

		int numBadWords = 0, numGoodWords = 0;

		for (char& c : dictionary) {
			if (c != (' ' | '-' | '\n')) {
				curWord += c;
			} else {
				// After loading a complete word, save it in the appropriate array.
				if (goodWord) {
					goodWords[numGoodWords] = curWord;
					numGoodWords++;
					// After loading a good word, the next word will be a bad word.
					goodWord = false;
				} else {
					badWords[numBadWords] = curWord;
					numBadWords++;
					// After loading a bad word, the next word will be a good word.
					goodWord = true;
				}
				// After saving the curWord in badWords or goodWords, clear curWord
				curWord = "";
			}
			if (numGoodWords == 15)
				break;
		}

		for (int i = 0; i < 15; i++) {
			cout << "Bad Word " << i << " : " << badWords[i] << endl;
		}

		return;
	}

	string fileInput(string filename) {

		cout << "File Input Called" << endl;

		ifstream inFile;
		inFile.open(filename);//open the input file

		stringstream strStream;
		strStream << inFile.rdbuf();//read the file
		string str = strStream.str();//str holds the content of the file

		return str;

	}

	string convertBadWords(string text) {

		cout << "text : \n" << text << endl;

		for (int index = 0; index < NUM_BAD_WORDS; index+=1) {

			// search for instances of badWords[index]
			while(text.find(badWords[index]) != string::npos) {
				// replace bad words
				size_t posToReplace = text.find(badWords[index]);

				text.replace(posToReplace, badWords[index].length(), goodWords[index]);
			}
		}

		return text;
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