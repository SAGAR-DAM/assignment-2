#include<stdio.h>
#include<conio.h>

int main()
{
   int i,n,x=1;
   printf("Enter the number:  ");
   scanf("%d",&n);
   for(i=1; i<=n; i++)
   {
   	x=x*i;
   }
   printf("\n\nThe factorial of %d is:   %d",n,x);
   return 0;
   getch();
}