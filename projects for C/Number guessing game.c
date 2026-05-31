#include<stdio.h>

int main(){

    int secret=20;

    int guess;

    while(1){
        printf("Enter guess:");
        scanf("%d", &guess);

        if(guess== secret){
            printf("Correct,You won\n");
            break;
        }
        if(guess<secret){
            printf("Too low\n");
        }else{
            printf("Too high\n");
        }
        
    }
    return 0;
}    
   