/* ***  Author:  Joe Listro
*  Last Update:  April 13, 2017
*     Filename:  leeroy_sound_test.cpp
*  Description:  Tests the applications ability to play a wav file.
*
*  Certification of Authenticity:
*     I certify that this assignment is entirely my own work.
**********************************************************************/

#include "gtest/gtest.h"

TEST(leeroy_sound_test, sound_test) {
	BleepBot().leeroy();
	EXPECT_NO_FATAL_FAILURE();
}