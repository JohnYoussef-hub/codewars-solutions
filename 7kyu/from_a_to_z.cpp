//Given a string indicating a range of letters, return a string which includes 
//all the letters in that range, including the last letter.

//Note that if the range is given in capital letters, return the string in capitals also!
//
//Examples
//"a-z" ➞ "abcdefghijklmnopqrstuvwxyz"
//"h-o" ➞ "hijklmno"
//"Q-Z" ➞ "QRSTUVWXYZ"
//"J-J" ➞ "J"



#include <string>
using namespace std;

string gimme_the_letters(const string& sp)
{
	char from = sp[0];
	char to = sp[2];

	string res = "";

	for (int i = from; i <= to; i++)
	{
		res += i;
	}

	return res;
}