//Robert Puls
//binary search function
//input sorted array, size of array, value to search for. Returns postion of value

#include <iostream>
using namespace std;

int binarySearch(const int[], int, int);

int binarySearch(const int array[], int size, int value)
{
	int first = 0,										//first array element
		last = size - 1,								//last array element
		middle,											//midpoint of search
		postion = -1;									//position of search value
	bool found = false;									//flag

	while (!found && first <= last)
	{
		middle = (first + last) / 2;					//calculate midpoint
		if (array[middle] == value)						//if value is found at mid
		{
			found = true;
			postion = middle;
		}
		else if (array[middle] > value)					//if value is in lower half
			last = middle - 1;
		else
			first = middle + 1;							//if value is in upper half
	}
	return postion;
}