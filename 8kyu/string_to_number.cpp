//We need a function that can transform a string into a number.What ways of achieving this do you know ?

//Examples
//"1234" -- > 1234
//"605"  -- > 605
//"1405" -- > 1405
//"-7" -- > -7


#include <iostream>
#include <math.h>
using namespace std;


int char_to_digit(char x) {
	return x - '0';
}

int string_to_number(const std::string& s) {
	int toInteger = 0;
	for (int i = s.length() - 1; i >= 0; i--) {
		char current = s[i];
		if (current == '-') toInteger *= -1;
		else {
			int currentInt = char_to_digit(current);
			toInteger += currentInt * pow(10, s.length() - 1 - i);
		}
	}
	return toInteger;
}