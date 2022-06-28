#include<stdio.h>
            //formal
void display(char *c){
    printf("%s",c);
}
// void display(int *arr){
//     printf("%d",arr[1]);


// }

int main(){
    int arr[]={1,2,3};
    
    char str[11]="hemlo qutie";
    char *ptr=str;

        //actual
    display(ptr);


}
    