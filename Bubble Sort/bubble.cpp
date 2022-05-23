#include "bubble.h"

void bubble(int * a,int length,int aux){
    for(int i = 0; i < length - 1; i++){
        for (int j = 0; j < length - i - 1; j++){
            if(a[j]> a[j + 1]){    
            aux=a[j];
            a[j]=a[j+1];
            a[j+1]=aux;
           }
        } 
    }
}