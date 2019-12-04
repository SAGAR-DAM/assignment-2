/* dynamic memory allocation
   Name: Sagar Dam; Dept: DNAP*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

float *f(float arr[]);

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
	   printf("%f\n",arr[i]);
   	arr[i]=1.0*(i+1)*(i+1);
      
   }

   //calling the function to evaluate mean and variance.
   m = f(arr)[0];
   v = f(arr)[1];

   free(arr);
   printf("\nThe value of mean is:  %f",m);
   printf("\nThe value of varience is:  %f",v);
	getch();
}

//defining the function to calculate mean and variance
float *f(float arr[])
{
   float x1 = 0.0;
   float *x =(float *)malloc(2*sizeof(float));
   for(int i=0; i<100; i++)
   {
   	x[0]=x[0]+arr[i+1]/100.0;
      x1=x1+arr[i+1]*arr[i+1]/100.0;
   }
   x[1]= x1-x[0]*x[0];
   return(x);
}
