#include<stdio.h>
void main()
{
int i = 0;
char name[20];
printf("\nEnter the Name : ");
while((name[i] = getchar())!='\n')
i++ ;/*while loop will accept the one character at a time and check
it with newline character. Whenever user enters newline character
then control comes out of the loop.*/
getch(); }