/* Programming for factorial with function...
Name: Sagar Dam;  DNAP*/

#include<stdio.h>
#include<conio.h>
int fact(int x);
void main()
{
	int n,f;
   printf("Enter the number:  ");
   scanf("%d",&n);
   printf("\n\nThe factorial:  %d",fact(n));
	getch();
}

//defining function for evaluation of n!
int fact(int x)
{
	if(x!=1)
   {
   return(x*fact(x-1));
   }
   else
   {
   return(1);
   }
}