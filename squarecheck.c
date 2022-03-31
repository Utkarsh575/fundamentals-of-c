#include <stdio.h>
#include<math.h>
void checkSquare(long int start,long int end){
    int i,count=0;
    for(i=start;i<=end;i++){
        int n=sqrt(i);
        if(n==sqrt(i))
        count++;}
        printf("%d\n",count);
}
int main(){
    long int q,start,end;
    scanf("%ld",&q);
    while(q--){
        scanf("%ld %ld",&start,&end);
        checkSquare(start,end);
}
	return 0;
}