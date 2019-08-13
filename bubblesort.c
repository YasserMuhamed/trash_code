#include "bubblesort.h"



void display(int *arr, uint32_t size)
{
    for (int i=0 ; i <size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf(" \n");
}

void bubbleSort(int arr[],int size,SORT sort)
{
    for (int i=0 ; i <size-1; i++)
    {
        for (int j=0; j<size-i-1;j++)
        {
            sort(&arr[j],&arr[j+1]);
        }
    }
}
