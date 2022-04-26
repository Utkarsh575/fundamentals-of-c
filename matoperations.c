#include<stdio.h>
#include<math.h>

int main() {

    int arr[3][3];
    int i,j,product=1,sum=0,choice,loop=1;

    while(loop==1){
        printf("Enter 1 for Sum of diagonal Elements\nEnter 2 for Product of Diagonal Elements\nPress 3 to exit :- ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            for(i=0;i<3;i++)
                {for(j=0;j<3;j++){
                printf("Enter the value of %d , %d :- ",i,j);
                scanf("%d",&arr[i][j]);
                }
            }    
            printf("\n");  
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    printf("%d\t",arr[i][j]);
                }
                printf("\n");
            }
            for(i=0;i<3;i++){ 
                for(j=0;j<3;j++){ 
                    if(i==j){
                    sum=sum+arr[i][j];
                    }
                }
            }
            printf("The Sum of diagonal elements:- %d\n",sum);
            printf("\n");
            break;
        case 2:
            for(i=0;i<3;i++)
                {for(j=0;j<3;j++){
                printf("Enter the value of %d , %d :- ",i,j);
                scanf("%d",&arr[i][j]);
                }
            }    
            printf("\n");  
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    printf("%d\t",arr[i][j]);
                }
                printf("\n");
            }
            
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    if(i==j){
                        product=product*arr[i][j];
                    }
                }
            }
            printf("The Product of diagonal elements:- %d\n",product);
            printf("\n");
            break;
        case 3:
            loop=0;
            break;
        default:
            printf("You have entered a wrong option !! TRY AGAIN \n\n");
            break;
        }
    }
return 0;
}