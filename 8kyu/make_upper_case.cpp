//Write a function which converts the input string to uppercase.


#include <string>

std::string makeUpperCase(const std::string& str)
{
    std::string res = "";
    for (char c : str) {
        res += toupper(c);
    }
    return res;
}