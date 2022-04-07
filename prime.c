#include <stdio.h>
int main(){
//prime or not
     int number;
     scanf("%d",&number);

     for(int i=2 ; i<number;i++){
         if(number%i==0){
             printf("not prime");
             break;
         }else{
             printf("prime");
             break;
         }
    
     }

    return 0;
}