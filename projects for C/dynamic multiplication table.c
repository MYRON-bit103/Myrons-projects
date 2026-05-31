#include<stdio.h>

int main(){

    int number;
    printf("Enter number:");
    scanf("%d", &number);

    int limit;
    printf("Enter limit:");
    scanf("%d", &limit);

    if(number<=0 || limit<=0){
        printf("please enter a positive number");
    }else{

    int i=1;

    while(i<=limit){
        int product = number*i;
        printf("%d * %d = %d\n",number ,i,product );
        i++;
    }}

    

}