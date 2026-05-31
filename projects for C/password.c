#include<stdio.h>
#include<string.h>

int main(){

    char username[]="Myron";
    char password[]="Raphael";

    char inputuser[50];
    char inputpass[50];

    printf("Enter inputuser:");
    scanf("%s", inputuser);

    printf("Enter inputpass");
    scanf("%s", inputpass);

    if(strcmp(inputuser, username)==0){
        if(strcmp(inputpass, password)==0){
            printf("login successful");
        }
        else{
            printf("wrong password");
        }
    }else{
        printf("wrong username");
    }
    return 0;
}