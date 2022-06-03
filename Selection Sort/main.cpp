#include <iostream>
#include "selection.cpp"
using namespace std;


int main(){
    int array_exmp[] = {6,7,2,33,1,24,87,45},size = sizeof(array_exmp)/sizeof(array_exmp[0]);
    SelectionSort(array_exmp,size);
    
    for(int i = 0 ;i < size;i++)
    cout << array_exmp[i] << " ";
    return 0;
}