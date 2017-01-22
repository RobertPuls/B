//Robert Puls
//selection sort function
//input array and size of array. sorts from least to greatest

#include <iostream>
using namespace std;

void selectSort(int [], int);

void selectSort(int array[], int size)
{
	int startScan, minIndex, minValue;

	for (startScan=0; startScan < (size-1); startScan++)
	{
		minIndex = startScan;
		minValue = array[startScan];
		for (int i = startScan+1; i < size; i++)
		{
			if (array[i] < minValue)
			{
				minValue = array[i];
				minIndex = i;
			}
		}
		array[minIndex] = array[startScan];
		array[startScan] = minValue;
	}
}

