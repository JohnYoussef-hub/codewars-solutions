//Complete the square sum function so that it squares each number passed into it and then sums the results together.
//
//For example, for[1, 2, 2] it should return 9 because



#include <vector>

int square_sum(const std::vector<int>& numbers)
{
	int sumSquares = 0;
	for (int n : numbers) sumSquares += n * n;

	return sumSquares;
}