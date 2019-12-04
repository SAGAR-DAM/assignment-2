#include<stdio.h>
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