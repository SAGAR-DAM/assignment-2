#include<stdio.h>
#include "header.h"

void main()
{
	int i;
   float* arr;
   float m,v;

   // allocating memory
   arr = (float *)malloc(100*sizeof(float));

   // input the values to array
   for(i=0; i<100; i++)
   {
   	arr[i]=1.0*(i+1)*(i+1);
      printf("%f\n",arr[i]);
   }

   //calling the function to evaluate mean and variance.
   m = f(arr)[0];
   v = f(arr)[1];

   free(arr);
   printf("\nThe value of mean is:  %f",m);
   printf("\nThe value of varience is:  %f",v);
	getch();
}
