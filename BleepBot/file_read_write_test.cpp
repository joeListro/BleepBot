/* ***  Author:  Joe Listro
*  Last Update:  April 11, 2017
*     Filename:  file_read_write_test.cpp
*  Description:  Tests the applications ability to read and write to a file.
*
*  Certification of Authenticity:
*     I certify that this assignment is entirely my own work.
**********************************************************************/

#include "gtest/gtest.h"

TEST(file_read_write_test, read_test) {
	file_IO fileIO = new file_IO();
	EXPECT_EQ("Test Text in test.txt", fileIO.read("test.txt"));
}

TEST(file_read_write_test, write_test) {
	file_IO fileIO = new file_IO();
	fileIO.write("Test Text in test.txt");
	EXPECT_EQ("Test Text in test.txt" fileIO.read("test.txt"));
}