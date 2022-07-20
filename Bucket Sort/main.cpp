#include <iomanip>
#include <iostream>
using namespace std;
#include "bucket.cpp"

int main(void) {
  int array[NARRAY] = {42, 32, 33, 52, 37, 47, 51};

  cout << "Initial array: " << endl;
  print(array);
  cout << "-------------" << endl;

  BucketSort(array);
  cout << "-------------" << endl;
  cout << "Sorted: " << endl;
  print(array);
}