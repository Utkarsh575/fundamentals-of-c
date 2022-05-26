#include <stdio.h>
#include <string.h>
int main() {
char source[ ] = "hihello" ;
char target[20]= "" ;
printf ( "\nsource string = %s", source )
; printf ( "\ntarget string = %s", target )
; strcpy ( target, source ) ;
printf("target string after strcpy()=%s",target)
; return 0; }
