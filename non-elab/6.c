#include<stdio.h>

int main(){

    int s1,s2,s3;
    printf("Enter the 1st side of the triangle :- ");
    scanf("%d",&s1);
    printf("Enter the 2nd side of the triangle :- ");
    scanf("%d",&s2);
    printf("Enter the 3rd side of the triangle :- ");
    scanf("%d",&s3);

    if(s1==s2 && s2==s3){
        printf("Equilateral");
    }
    else if(s1 == s2 || s2 == s3 || s3 == s1){
        printf("isosceles");
    }else{
        printf("scalene");
    }
    return 0;
}