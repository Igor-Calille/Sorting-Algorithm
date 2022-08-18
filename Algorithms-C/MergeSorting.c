/*
Author: Igor Masson Calille
Date: 08/17/2022

MergeSorting Algorithm for an int type array


*/
#include<stdio.h>

mergeSort(int lista[], int first, int last);
merge(int lista[], int first,int mid, int last);

int main(){


}

mergeSort(int lista[], int first, int last){
    int mid;
    if(first < last){
        mid = (first + last)/2;
        mergeSort(lista, first, mid);
        mergeSort(lista, mid, last);
        merge(lista, first, mid, last);
    }
}

merge(int lista[], int first,int mid, int last){
    int novaLista[last - 1];
    for(int i = first; i < last; i++) novaLista[i] = lista[i];

    
}

