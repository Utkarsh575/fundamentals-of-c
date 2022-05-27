#include <stdio.h>
int main (){

    int hash_arr[]={0,0,0,0,0}; // hashing to find the frequency to reduce time complexity
    // random dataset of votes ranging from 1-5
    int votes[]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,3,3,3,3,3,4,4,4,4,4,5,5,5,5,5}; 

    int n = sizeof(votes) / sizeof(int); //fidning the size of our random array using pointers

    for(int i=0 ; i<n;i++){
        if(votes[i]==1){
            hash_arr[0]++;
        }
        else if (votes[i]==2)
        {
            hash_arr[1]++;
        }
        else if (votes[i]==3)
        {
            hash_arr[2]++;
        }
        else if (votes[i]==4)
        {
            hash_arr[3]++;
        }
        else if (votes[i]==5)
        {
            hash_arr[4]++;
        } 
    }
    int max=0;
    int index=0;
    // loop to find the index with highest frequency
    for(int i=0;i<5;i++){
        if(hash_arr[i]>max){
            max=hash_arr[i];
            index=i+1; // storing the index of the winner
        }
    }
    printf("The candidate who won is:- %d",index);
    return 0;

}