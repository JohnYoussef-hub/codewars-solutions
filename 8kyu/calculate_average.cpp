//Write a function which calculates the average of the numbers in a given array.


#include <vector>

double calcAverage(const std::vector<int>& values) {
    double sum = 0;
    for (int x : values) {
        sum += x;
    }
    return sum / values.size();
}