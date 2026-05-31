#include<stdio.h>

int main(){

    char operator;
    printf("Choose an operator['+','*','/','-']:   ");
    scanf("%c", &operator);
    
    double num1,num2;

     printf("Enter num1: ");
     scanf("%lf", &num1);

     printf("Enter num2: ");
     scanf("%lf", &num2);

    double result; 
    
    switch(operator){
        case '+':
        result =num1 + num2;
        break;
         
        case '-':
         result =num1-num2;
         break;
        
         case '/':
         result =num1/num2;
         break;

         case '*':
         result =num1*num2;
         break;

         default:
         printf("invalid operator\n");
         return 1;
          
    }
    printf("result is %lf\n ", result);

    return 0;


}