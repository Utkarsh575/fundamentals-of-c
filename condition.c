#include<stdio.h>

int main(){

    int number;
    printf("enter a number and check waht day it coresponds to:- \n");
    scanf("%d",&number);


    // = is assignment operator 
    // == is equality operator

    if(number == 1){
        printf("monday");
    }
    else if(number ==2){
        printf("tuesday");
        
    }else if(number ==3){
        printf("wednesday");
    }
    else if(number ==4){
        printf("thursday");
    }
     else if(number ==5){
        printf("friday");
    }
    else if(number ==6){
        printf("saturday");
    }
     else if(number ==7){
        printf("sunday");
    }







    return 0;
}