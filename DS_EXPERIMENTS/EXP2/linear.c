// c code for linear search x in arr[].
// krishnapriyavr_37
#include<stdio.h>
int search(int arr[],int N,int x)
{
   for (int i=0;i<N;i++)
   if(arr[i]==x)
   return i;
   return -1;
}
int main(void)
{
   int arr[]={2,3,4,10,40};
   int x =10;
   int N=sizeof(arr);
   int result=search(arr,N,x);
   (result==-1)
     ?printf("Elements is not present in array")
     :printf("elements is present at index %d ",result);
   return 0;
}     
      
