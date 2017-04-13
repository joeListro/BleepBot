/* ***  Author:  Sam Poquette
*  Last Update:  April 13, 2017
*     Filename:  trump_replace_test.cpp
*  Description:  Tests the applications ability to replace "Trump words" in a file.
*
*  Certification of Authenticity:
*     I certify that this assignment is entirely my own work.
**********************************************************************/

#include "gtest/gtest.h"
#include <string>

using namespace std;

TEST()
{
	string badWords = "insert bad words here";
	string expected = "insert here";
	string actual = convertTrumpWords(theString);

	EXPECT_EQ(actual, expected);

}