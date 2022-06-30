#include<stdio.h>
void 
fun1(void(*test)())
{
int 
a=20; 
test(a);
}
void test(int a)
{
printf("a=%d\n",a);
}
void 
main()
{
fun1(&test
);
}
