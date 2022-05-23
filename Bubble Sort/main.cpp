#include <iostream>
using namespace std;
#include "bubble.cpp"


int main(){
int seq[] = {5,4,2,8,23,81,66},aux;
int length = sizeof(seq)/sizeof(seq[0]);

for(int h = 0;h < 50;h++) bubble(seq,length,aux);

for(int k = 0;k< length;k++) cout << seq[k] << endl;
    return 0;
}