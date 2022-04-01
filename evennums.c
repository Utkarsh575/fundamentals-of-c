#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    //print 1-100 using for ; even
    for(int i = 0; i<=n;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
    return 0;
}