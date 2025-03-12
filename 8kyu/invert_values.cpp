//Given a set of numbers, return the additive inverse of each.Each positive becomes negatives, and the negatives become positives.
//
//[1, 2, 3, 4, 5] -- > [-1, -2, -3, -4, -5]
//[1, -2, 3, -4, 5] -- > [-1, 2, -3, 4, -5]
//[] -- > []

#include <vector>
using namespace std;

vector<int> invert(std::vector<int> values)
{
	for (int i = 0; i < values.size(); i++)
	{
		values[i] *= -1;
	}
	return values;
}