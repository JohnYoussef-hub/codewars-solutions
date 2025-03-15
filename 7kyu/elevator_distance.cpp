//Imagine you start on the 5th floor of a building, then travel down to the 2nd floor, 
//then back up to the 8th floor.You have travelled a total of 3 + 6 = 9 floors of distance.
//
//Given an array representing a series of floors you must reach by elevator, 
//return an integer representing the total distance travelled for visiting each 
//floor in the array in order.
//
//// simple examples
//[5, 2, 8] = > 9
//[1, 2, 3] = > 2
//[7, 1, 7, 1] = > 18
//
//// if two consecutive floors are the same,
////distance travelled between them is 0
//[3, 3] = > 0





/////////////// solution 1 ////////////////////////////

#include <vector>
using namespace std;

int elevator_distance(vector<int> array) {

	int res = 0;

	for (int i = 0; i < array.size() - 1; i++)
	{
		if (array[i] > array[i + 1]) res += array[i] - array[i + 1];
		else res += array[i + 1] - array[i];
	}

	return res;
}



/////////////// solution 2 ////////////////////////////

#include <vector>
using namespace std;

int elevator_distance(vector<int> array) {

	int res = 0;

	for (int i = 0; i < array.size() - 1; i++)
	{
		res += abs(array[i] - array[i + 1]);
	}

	return res;
}