#include<stdio.h>
#include<string.h>
void main()
{
int i,j;
char array[10][10],temp[10];
printf("Enter ten words : \n");
for(i=0;i<10;i++)
{
printf("%d : ",i+1);
gets(array[i]);
}
for(i=0;i<10;i++)
{
for(j=i;j<10;j++)
{

if(strlen(array[i])<strlen(array[j]))
{

strcpy(temp,array[i]);
strcpy(array[i],array[j]);
strcpy(array[j],temp);
}
}
}
printf("\nSorted ten words are : \n");
for(i=0;i<10;i++)
{
printf("%s \n",array[i]);
}
}
