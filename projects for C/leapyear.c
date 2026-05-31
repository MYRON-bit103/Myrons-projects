#include <stdio.h>

// Function to check for leap year
int is_leap_year(int year) {
    if (year < 1582) {
        return 0; // 
    }

    //leap year should be divisible by 4 or 400 and not by 100
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        return 1;
    }

    return 0;
}

int main() {
    int year;

    printf("Enter a year: ");//user iputs a value
    scanf("%d", &year);

    // result
    if (is_leap_year(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}

