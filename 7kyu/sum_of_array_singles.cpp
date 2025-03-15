//In this Kata, you will be given an array of numbers in which 
//two numbers occur once and the rest occur only twice.Your task 
//will be to return the sum of the numbers that occur only once.
//
//For example, repeats([4, 5, 7, 5, 4, 8]) = 15 because only the numbers 7 and 8 occur once, 
//and their sum is 15. Every other number occurs twice.



void QuickSort(std::vector<int>& v) {
	for (int i = 0; i < v.size() - 1; i++)
	{
		for (int j = 0; j < v.size() - 1 - i; j++)
		{
			if (v[j] > v[j + 1]) {
				int temp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = temp;
			}
		}
	}
}



/////////////// solution 1 ////////////////////////////
int repeats(std::vector<int>v) {

	int sum = 0;

	QuickSort(v);

	for (int i = 0; i < v.size() - 1; i++)
	{
		if (v[i] != v[i + 1]) {

			if (i + 2 == v.size()) return sum += v[i] + v[i + 1];

			sum += v[i];

		}

		else i++;
	}
	return sum;
}



/////////////// solution 2 ////////////////////////////
using namespace std;

int repeats(vector<int> v) {
	int sum = 0;

	for (int num : v) {
		if (count(v.begin(), v.end(), num) == 1) sum += num;
	}
	return sum;
}