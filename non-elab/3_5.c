#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[1000];  
    int i;
    char vowels[100]="";
    char consonants[100]="";
    
 
    printf("Enter  the string : ");
    gets(s);
     
    for(i=0;i<strlen(s);i++)  
    {

		
            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O' ||s[i]=='U'){
		      strncat(vowels, s[i], 1);
              
              }
            else{
             strncat(consonants, s[i], 1);
             
            }

        
 
 	}
 	
     
    printf("vowels = %c\n",vowels);
    printf("consonants = %c\n",consonants);
    
    return 0;
}