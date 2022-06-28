#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Human {  // 
    char name[10];
    int age;
}person;

void display( struct Human someone[]){
    printf("%d",someone[1].age);
    printf("%d",(someone+1)->age);
    // printf("\n%s",(*someone).name);


}
int main(){
    // pointer-type *<pointer var> = (array type*)malloc(size_of_array*sizeof(each element))
    

person *ptr=(struct Human*)malloc(10*sizeof(struct Human));


    int i=1;
    ptr[0].age=25;
    // printf("%d",ptr[0].age);
    ptr[1].age=35;
    // printf("%d",(ptr+i)->age);

    // adam.age=10;
    // strcpy(adam.name,"adam");
    display(ptr);

    return 0;
}