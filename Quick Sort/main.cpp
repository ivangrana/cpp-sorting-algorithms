#include <iostream>
using namespace std;
#include "quick.cpp"

int main(int argc, char *argv[])
{
	int array[10] = {5, 8, 1, 2, 7, 3, 6, 9, 4, 10};
	for(int i = 0; i < 10; i++)
	{
		cout << array[i] << ' ';
	}
	cout << std::endl;
	quicksort(array, 0, 10);
	for(int i = 0; i < 10; i++)
	{
		cout << array[i] << ' ';
	}
	return 0;
}