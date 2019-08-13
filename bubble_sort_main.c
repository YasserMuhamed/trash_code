#include"bubblesort.h"


void sorting_ascend(int*,int*);
void sorting_descend(int *,int *);

void swap(int *var, int *var1);

int main()
{
    int array[]={44,2,333,4,5,666,0};
    printf("Array before ascend sorting is \n");
    display(array,7);
    printf("Array after ascend sorting is \n");
    bubbleSort(array,7,sorting_ascend);
    display(array,7);
    printf("Array after descend sorting is \n");
    bubbleSort(array,7,sorting_descend);
    display(array,7);


    return 0 ;
}


void sorting_ascend(int *var, int *var1)
{
    // we can do some code refactoring here , like a swap function
        if(*var>*var1)
       swap(var, var1);

}

void sorting_descend(int *var, int *var1)
{
    if(*var<*var1)
    swap(var, var1);

}

void swap(int *var, int *var1)
{

    {
      int temp=*var;
      *var=*var1;
      *var1=temp;
    }
}
