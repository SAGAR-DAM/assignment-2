//including standard libraries....
#include<stdio.h>
#include<conio.h>

// the main programme
void main()
{
// defining the variables
int i;
float f;
char c;
double d;
long int l;

//printing the sizes of int, float, char, double, long int in bytes
printf("The size of an integer variable (in bytes):  %d", sizeof(i));
printf("\n The size of a float variable (in bytes):  %d", sizeof(f));
printf("\n The size of a char variable (in bytes):  %d", sizeof(c));
printf("\n The size of a double variable (in bytes):  %d", sizeof(d));
printf("\n The size of a long int variable (in bytes):  %d", sizeof(l));


getch();
}
