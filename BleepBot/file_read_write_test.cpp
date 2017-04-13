/* ***  Author:  Joe Listro
*  Last Update:  April 11, 2017
*     Filename:  file_read_write_test.cpp
*  Description:  Tests the applications ability to read and write to a file.
*
*  Certification of Authenticity:
*     I certify that this assignment is entirely my own work.
**********************************************************************/

#include "gtest/gtest.h"
#include <string>
#include "source.cpp"

using namespace std;

TEST()
{
	string filename = "test.txt";
	string expected = "...";
	string actual = fileInput(filename);
	EXPECT_EQ(actual, expected);
}