#include <stdio.h>
void swap(int x, int y); /* function declaration
*/ int main ()
{
int a = 100; /* local variable definition */
int b = 200;
printf("Before swap, value of a : %d\n", a );
printf("Before swap, value of b : %d\n", b );/*calling a function to swap the values
*/ swap(a, b);
printf("After swap, value of a : %d\n", a );
printf("After swap, value of b : %d\n", b );
return 0;
}
