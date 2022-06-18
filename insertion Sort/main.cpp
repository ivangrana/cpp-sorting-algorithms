#include <math.h>
#include <iostream>
#include "insertion.cpp"
using namespace std;


int main(){
    int arr[] = { 12, 11, 13, 5, 6 };
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Array before sorting:\n";
    print(arr,size);
    
    cout << endl << "Array after sorting:\n";
    insertionSort(arr, size);
    print(arr, size);
    return 0;
}