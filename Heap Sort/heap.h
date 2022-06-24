#include "heap.cpp"

int main(){
    int vetor[] = {56,77,33,12,44,756,1212};
    int size = sizeof(vetor)/sizeof(vetor[0]);
    heapsort(vetor, size);
    for (size_t i = 0; i < size; i++)
    {
       cout << vetor[i] << " ";
    }
    
    return 0;

}