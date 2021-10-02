#include <stdio.h>
#include <stdlib.h>

int arrySum(int array[], int size)
{
 int sum=0;
 for(int i = 0; i < size; i++)
 {
	 sum =sum + array[i];
 }
  return sum;
} 
 int main() 		
 {
	 int a;
	 int b;
	 int c;
	 int d;
	 int e;
	 int f;
	 char chce;
	 int parkA[4];
	 int parkB[7];
	 int parkC[8];
	
	  printf("Enter parking slot\n");
	 chce = getchar();
	sw
	 {
		 printf("Enter parking space\n");
		 scanf("%d", &a);
		 printf("Enter state\n");
		 scanf("%d", &d);
	 }
	
	 parkA[a] = d;
	 parkB[b] = e;
	 parkC[c] = f;
	  int sumA = arrySum(parkA, 4);
	 int sumB = arrySum(parkB, 7);
	 int sumC = arrySum(parkC, 8);
     printf("The sum of park lots = %d", sumA);

 return 0;
 }
