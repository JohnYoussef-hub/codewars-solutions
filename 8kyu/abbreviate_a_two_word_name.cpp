//Write a function to convert a name into initials.This kata strictly takes two words with one space in between them.
//
//The output should be two capital letters with a dot separating them.
//
//It should look like this:
//
//Sam Harris = > S.H
//
//patrick feeney = > P.F



#include <string>
using namespace std;

string abbrevName(std::string name)
{
	string res = "";
	res += toupper(name[0]);
	res += ".";
	res += toupper(name[name.find(" ") + 1]);

	return res;
}