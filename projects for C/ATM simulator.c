#include<stdio.h>

int main(){

    double balance =1000.0;
    int choice;
    double amount;

    prinf("WELCOME TO ATM:");

    while(1){
        printf("\n====ATM BANKING SYSTEM====\n");
        printf(" 1. Check Balance\n");
        printf("2. Deposit money\n");
        printf("3. Withdraw money\n");
        printf("4. Exit\n");
        printf("Enter choice:");
        scanf("%d", &choice);
    

    if(choice == 1){
        printf("Your balance is%.2lf", balance);

    } else if(choice ==2){
        printf("Enter deposit amount:");
        scanf("%lf", &amount);

        balance = balance + amount;
        printf("The new balance is %.2lf", balance);

    }else if(choice == 3){
        printf("Withdraw amount:");
        scanf("%lf", &amount);

        if(amount > balance){
            printf("Insufficient funds");

        }else{
            balance= balance - amount;
            printf("The new balance is %.2lf", balance);
        }

    }else if(choice == 4){
        printf("Thank you for using this servive\nhave a nice day");
        break;

    }else{
        printf("Invalid selection");
    }

    }
}

