//Write function RemoveExclamationMarks which removes all 
//exclamation marks from a given string.


#include <string>
using namespace std;

string removeExclamationMarks(string str) {
    string empty = "";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != '!') empty += str[i];
    }
    return empty;
}
