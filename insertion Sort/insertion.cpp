#include <iostream>
#include "insertion.h"
using namespace std;

void print(int vector[], int size_vector){
    int i;
    for (i = 0; i < size_vector; i++)
        cout << vector[i] << " ";
    cout << endl;
}

void insertionSort(int vector[], int size){
    int i, j, key;
    for (i = 1; i < size; i++) {
        key = vector[i];
        j = i - 1;
        while (j >= 0 && vector[j] > key) {
            vector[j + 1] = vector[j];
            j = j - 1;
        }
        vector[j + 1] = key;
    }
}
