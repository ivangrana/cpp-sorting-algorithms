#include <iostream>
#include "selection.h"

void SelectionSort(int array[], int size) {
    for (int index = 0; index < size; ++index) {
        int lower_index = index;
        for (int next_index = index+1; next_index < size; ++next_index) {
            if (array[next_index] < array[lower_index]) {
                lower_index = next_index;
            }
        }
        int aux = array[index];
        array[index] = array[lower_index];
        array[lower_index] = aux;
    }
}