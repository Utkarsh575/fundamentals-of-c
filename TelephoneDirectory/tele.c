#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

typedef struct Contact
{
    char name[100];
    long long int number;

}Contact;

Contact contacts[100];

int main(){
        int index=0;

        while(true){
            int outerchoice;
            printf("\n|---------------------------------|\n");
            printf("|WELCOME TO Telephone Directory !!|\n");
            printf("|                                 |\n");
            printf("|---------------------------------|\n");
            printf("\n[1] Search a contact");
            printf("\n[2] Add a contact");
            printf("\n[3] Show Directory");
            printf("\n[4] Exit");
            printf("\nEnter your choice:- ");
            scanf("%d",&outerchoice);
            if(outerchoice==1){
                // search a contact
                int searchchoice;
                char username[100];

                while (true)
                {
                    printf("\n[1] Search A Contact");
                    printf("\n[2] Exit");
                    printf("\nEnter your choice:- ");
                    scanf("%d",&searchchoice);
                    if(searchchoice==1){
                        printf("\nEnter a name to search:-");
                        scanf("%s",&username);
                        printf("\nSEARCHING PA PLS WAIT...");
                        bool matched;
                        int index_state;
                        for(int i=0;i<index;i++){
                            index_state=i;
                            if(strcmp(username,contacts[i].name)==0){
                                matched=true;
                                break;
                            }
                        }
                       // printf("%d",matched);
                        if(matched){
                            printf("\n THE CONTACT IS ");
                            printf("\n\t Name:- %s Number:- %lld",contacts[index_state].name,contacts[index_state].number);
                            break;
                        }
                    }if(searchchoice==2){
                        break;
                    }
                }
            }
            if (outerchoice==2){
                // add a contact
                long long int number;
                char name[100];
                while (true)
                {
                    int innerchoice;
                    printf("\n[1] Add information");
                    printf("\n[2] Exit");
                    printf("\nEnter your choice:- ");
                    scanf("%d",&innerchoice);
                    if(innerchoice==1){
                        printf("\n Enter the name of the person:- ");
                        scanf("%s",&name);
                        printf("\n Enter the Phone Number of the person:- ");
                        scanf("%lld",&number);
                        strcpy(contacts[index].name,name);
                        contacts[index].number=number;
                        printf("\nCONTACT ADDED SUCCESSFULLY!!");
                        printf("\n\t%s",contacts[index].name);
                        printf("\n\t%lld",contacts[index].number);
                        index++;
                    }if(innerchoice==2){
                        printf("BYE BYE!!");
                        break;
                    }
                }
            }if(outerchoice==3){
                // fetch all contacts
                printf("\n|---------------------------------|");
                printf("\n|         Contact Storage         |");
                printf("\n|---------------------------------|");
                for(int i=0;i<100;i++){
                    if(i==index){
                        break;
                    }else{
                        printf("\nName:- %s \t Contact Number:- %lld ",contacts[i].name,contacts[i].number);
                        } 
                }
            }
            if (outerchoice==4){
                // exit
                break;
            }
        } 
    return 0;  
}