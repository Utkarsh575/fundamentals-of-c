/*
n=4 row=n2-1
1
12
123
1234
123
12
1

*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}