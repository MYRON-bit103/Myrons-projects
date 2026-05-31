#include<stdio.h>

int main(){

    while(1){

        int number;
        printf("Enter number:");
        scanf("%d", &number);

        if( number>0 ){
            printf("Positive number");
            break;// loop breaks
        }

        if( number<0 && number % 2 ==0){
            printf("Negative even\n");
            continue;// the loop continues
        }

        if(number<0 && number %2 !=0){// should be at the end after other condition have been met
            printf("The number is %d\n", number);
        }

    }
    return 0;
}