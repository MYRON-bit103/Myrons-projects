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

    for(int i=1;i<=limit;i++){
        int product=number*i;
         printf("%d * %d = %d\n",number,i,product);
    }}
   
}
