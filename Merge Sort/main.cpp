#include <iostream>
using namespace std;
#include "merge.cpp"


int main()
{
	int arr[] = {5,9,87,12,55,43,21,6,77,3}; //Sequence
	int arr_length = sizeof(arr) / sizeof(arr[0]); //sequence's length

	mergeSort(arr, 0, arr_length - 1);

	cout << "\nSequence after Merge sorting -> ";
	print(arr, arr_length);
	return 0;
}