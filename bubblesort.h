#include<stdio.h>
#include<stdint.h>

typedef void(*SORT)(int*,int*);

void display(int *, uint32_t size);

void bubbleSort(int arr[],int size,SORT sort);
