#include<stdio.h>
int main()
{
 int i,j,k,count1,count2;
 int r1,c1,r2,c2;
 printf("Enter the number of rows of first matrix: ");
 scanf("%d",&r1);
 printf("Enter the number of columns of first matrix: ");
 scanf("%d",&c1);
 printf("Enter the number of rows of second matrix: ");
 scanf("%d",&r2);
 printf("Enter the number of columns of second matrix: ");
 scanf("%d",&c2);
 int sparseA[r1][c1],sparseB[r2][c2];
 int tupleA[r1*c1+1][3],tupleB[r2*c2+1][3];
 printf("Enter the elements of first matrix: ");
 for(i=0;i<r1;i++)
 {
  for(j=0;j<c1;j++)
  {
   scanf("%d",&sparseA[i][j]);
  }
 }
 for(i=0;i<r1;i++)
 {
  for(j=0;j<c1;j++)
  {
   if (sparseA[i][j]!=0)
   {
    tupleA[k][0]=i;
    tupleA[k][1]=j;
    tupleA[k][2]=sparseA[i][j];
    k++,count1++;
   }
  }
 }
 tupleA[0][0]=r1;
 tupleA[0][1]=c1;
 tupleA[0][2]=count1;
 printf("Enter the elements of second matrix: ");
 for(i=0;i<r2;i++)
 {
  for(j=0;j<c2;j++)
  {
   scanf("%d",&sparseB[i][j]);
  }
 }
 for(i=0;i<r2;i++)
 {
  for(j=0;j<c2;j++)
  {
   if (sparseB[i][j]!=0)
   {
    tupleB[k][0]=i;
    tupleB[k][1]=j;
    tupleB[k][2]=sparseB[i][j];
    k++,count2++;
   }
  }
 }
 tupleB[0][0]=r2;
 tupleB[0][1]=c2;
 tupleB[0][2]=count2;
 printf("Tuple matrix A representation:\n");
 {
 i=0;
 while(i<k)
 {
  printf("%d\t%d\t%d\n",tupleA[i][0],tupleA[i][1],tupleA[i][2]);
  i++;
 }
 }
 printf("Tuple matrix B representation:\n");
 {
 i=0;
 while(i<k)
 {
  printf("%d\t%d\t%d\n",tupleB[i][0],tupleB[i][1],tupleB[i][2]);
  i++;
 }
 }
 return 0;
}
