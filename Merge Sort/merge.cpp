#include "merge.h"
void merge(int array[], int const left, int const middle, int const right)
{
	auto indexOfSubArrayOne = 0, // Initial index of first sub-array
		indexOfSubArrayTwo = 0; // Initial index of second sub-array
	int indexOfMergedArray = left; // Initial index of merged array
	
	auto const subArrayOne = middle - left + 1;
	auto const subArrayTwo = right - middle;

	auto *leftArray = new int[subArrayOne],
		*rightArray = new int[subArrayTwo];

	for (auto i = 0; i < subArrayOne; i++)
		leftArray[i] = array[left + i];
	for (auto j = 0; j < subArrayTwo; j++)
		rightArray[j] = array[middle + 1 + j];

	

	while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
		if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
			array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
			indexOfSubArrayOne++;
		}
		else {
			array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
			indexOfSubArrayTwo++;
		}
		indexOfMergedArray++;
	}
	//remaining elements at left...
	while (indexOfSubArrayOne < subArrayOne) {
		array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
		indexOfSubArrayOne++;
		indexOfMergedArray++;
	}
	//remaining elements at right...
	while (indexOfSubArrayTwo < subArrayTwo) {
		array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
		indexOfSubArrayTwo++;
		indexOfMergedArray++;
	}
}

void mergeSort(int array[], int const begin, int const end)
{
	if (begin >= end) return; //recursive call

	auto middle = begin + (end - begin) / 2;
	mergeSort(array, begin, middle);
	mergeSort(array, middle + 1, end);
	merge(array, begin, middle, end);
}

void print(int A[], int size) //function for printing a sequence
{
	for (int i = 0; i < size; i++) cout << A[i] << " ";
    cout << endl;
}