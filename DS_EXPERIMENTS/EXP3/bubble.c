// program to find the bubble sort
//krishnapriyavr_37
#include<stdio.h>
#include<stdbool.h>
void swap(int* p,int* q)
{
    int temp =*p;
    *p=*q;
    *q=temp;
}
void bubbleSort(int arr[],int n)
{
  int i,j;
  bool swapped;
  for(i=0;i<n-1;i++)
  {
     swapped =false;
     for(j=0;j<n-i-1;j++)
     {
       if(arr[j]>arr[j+1])
       {
         swap(&arr[j],&arr[j+1]);
         swapped = true;
       }      
     }
     if(swapped==false)
     break;
   }
}
void printArray(int arr[],int size)
{
   int i;
   for(i=0;i<size;i++)
   printf("%d",arr[i]);
}
int main()
{
  int arr[]={64,34,25,12,22,11,90};
  int n=sizeof(arr)/sizeof(arr[0]);
  bubbleSort(arr,n);
  printf("sorted array:\n");
  printArray(arr,n);
  return 0;
}           
