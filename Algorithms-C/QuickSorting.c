/*
Author: Igor Masson Calille
Date: 08/17/2022

QuickSorting Algorithm for an int type array
-Pivo as first

*/
#include<stdio.h>

void quicksort(int number[],int first,int last);

int first = 0;//Array start at 0

int main(){// testing
    int number[15] = {5,8,1,4,2,7,3,7,9,7,4,2,5,10,17};//Array for example
    int last = 10;

    printf("\nNon Sorted: ");
    for(int i=0;i<last;i++) printf(" %d",number[i]);
   
    quicksort(number,first,last);

    printf("\nSorted: ");
    for(int i=0;i<last;i++) printf(" %d",number[i]);

    return 0;
}

void quicksort(int number[],int first,int last){
   int i, j, pivot, temp;
   if(first<last){
        pivot=first;
        i=first; j=last;
        while(i<j){
            while(number[i]<=number[pivot]&&i<last)i++;

            while(number[j]>number[pivot]) j--;

            if(i<j){
                temp=number[i];
                number[i]=number[j];
                number[j]=temp;
            }
        }
        temp=number[pivot];
        number[pivot]=number[j];
        number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);
    }
}
