#include<stdio.h>

int multiplication( int number1 , int number2){
    int product = number1*number2;

    return product;
}

int main(){

    int result = multiplication(2,2);
    printf("The product is %d", result);
}

/*
it can also be written as a prototype function where the int multiplication is declared first then its definition follows later
#include<stdio.h>

int multiplication( int number1 , int number2);

int main(){

    int result = multiplication(2,2);
    printf("The product is %d", result);
}
    
    int multiplication( int number1 , int number2){
    int product = number1*number2;

    return product;
}
*/