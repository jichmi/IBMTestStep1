#include <stdio.h>
#include <stdlib.h>


int main()
{
    int xchg0(int* a,int* b);
    int xchg1(int* a,int* b);
    int popSort(int* arr,int n);
    int i;
    int arr[7]={3,7,5,18,15,6,20};
    popSort(arr,7);
    for(i=0;i<7;i++) printf("%d\t",arr[i]);
    return 0;
}
/**
 *exchange two number
 */
 /*frist*/
int xchg0(int* a,int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}

/*second*/
int xchg1(int* a,int* b)
{
    *a=(*a)-(*b);
    *b=(*b)+(*a);
    *a=(*b)-(*a);
    return 0;
}

/**
 *sort function
 */
int popSort(int* arr,int n)
{
    int i,j;
    for(i=n;i>0;i--)
        for(j=0;j<i;j++)
        if(arr[j]>arr[j+1])
        xchg0(arr+j,arr+j+1);
    return 0;
}
/**
 *others sort function below
 */
