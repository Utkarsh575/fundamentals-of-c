#include <stdio.h>
#include <conio.h>
int main()
{   
    char stu[5];
    char gender[5];
    float BMI[5];
    float HT[5],WT[5];
    int i;
    printf("STUDENT'S DATA FOR SELECTION\n");
    for(i=0;i<5;i++)
    {   
        printf("input in the format given below\n");
        printf("name of student   : %d\n",i+1);
        printf("gender of student : %d\n",i+1);
        printf("height of student : %d\n",i+1);
        printf("weight of student : %d\n",i+1);
        scanf("%c\n%c\n%f\n%f",&stu[i],&gender[i],&HT[i],&WT[i]);
        BMI[i]=WT[i]/((HT[i])*(HT[i]));

    }

for(int i=0 ; i<5;i++){
        switch(gender[i])
    {
        case'M':
        if(BMI[i]>22)
        {
            printf("%f",BMI);
            printf("You are Selected\n");
        }
        else
        {
            printf("%f",BMI);
            printf("You are not Selected\n");
        }
        break;
        case'F':
        if(BMI[i]>20)
        {
            printf("%f",BMI);
            printf("You are selected\n");
        }
        else
        {
            printf("%f",BMI);
            printf("You are not Selected\n");
        }
        break;
    }
    


}
    // switch(gender)
    // {
    //     case'M':
    //     if(BMI>22)
    //     {
    //         printf("You are Selected");
    //     }
    //     else
    //     {
    //         printf("You are not Selected");
    //     }
    //     break;
    //     case'F':
    //     if(BMI>20)
    //     {
    //         printf("You are selected");
    //     }
    //     else
    //     {
    //         printf("You are not Selected");
    //     }
    //     break;
    // }
    return 0;
}