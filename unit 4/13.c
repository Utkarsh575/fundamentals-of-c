#include <stdio.h> 
void fun(int a)
{
printf("a=%d\n",a);
}
void main()
{
void 
(*fun1)(int)=&fun; 
(*fun1)(15);
}
