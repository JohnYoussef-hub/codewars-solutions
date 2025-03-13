//Write a function that accepts a non - negative integer n and a string s as parameters, and returns a string of s repeated exactly n times.
//
//Examples(input->output)
//6, "I"     -> "IIIIII"
//5, "Hello" -> "HelloHelloHelloHelloHello"



#include <string>
using namespace std;

string repeat_str(size_t repeat, const string& str) {
    string repeatedString = "";
    for (int i = 0; i < repeat; i++) {
        repeatedString += str;
    }
    return repeatedString;

    return "";
}