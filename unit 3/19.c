#include<stdio.h>
void area(); // Prototype Declaration
void main()
{
area();
}
void area()
{
float area_circle;
float rad;
printf("\nEnter the radius : ");
scanf("%f",&rad);
area_circle = 3.14 * rad * rad ;
printf("Area of Circle =%f",area_circle);
}