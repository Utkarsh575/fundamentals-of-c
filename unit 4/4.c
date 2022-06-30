#include <stdio.h>
 int main()
{
int num = 45 , *ptr , 
**ptr2ptr ; ptr = &num;
//3000
ptr2ptr = &ptr; //4000
printf("%d",**ptr2ptr); return(0);
}
