//Complete the function to find the count of the most frequent item of an array.
//You can assume that input is an array of integers.For an empty array return 0
//
//Example
//input array : [3, -1, -1, -1, 2, 3, -1, 3, -1, 2, 4, 9, 3]
//ouptut : 5




/////////////// solution 1 ////////////////////////////

#include <vector>
using namespace std;

unsigned int most_frequent_item_count(const vector<int>& collection) {

	int freq = 0;

	for (int n : collection) {
		int t = count(collection.begin(), collection.end(), n);
		if (t > freq) freq = t;
	}

	return freq;
}



/////////////// solution 2 ////////////////////////////

#include <vector>
using namespace std;

unsigned int most_frequent_item_count(const vector<int>& collection) {

	int freq = 0;

	for (int i = 0; i < collection.size(); i++) {
		int t = 0;
		for (int j = 0; j < collection.size(); j++)
		{
			if (collection[i] == collection[j]) t++;
		}
		if (t > freq) freq = t;
	}

	return freq;
}