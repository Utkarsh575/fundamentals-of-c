#include <stdio.h>
 void main()
{
int a[10],i,n; 
printf("Enter n"); 
scanf("%d",&n);
for(i=0;i<n;i++) 
scanf("%d",&a[i]); 
for(i=0;i<n;i++) 
printf("a[%d]=%d\n",i,*(a+i));
}
