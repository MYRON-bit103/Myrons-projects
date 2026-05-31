/* 
Authors:Raphael, Sithika
Date:12.05.2026
*/

#include <stdio.h>

void decimal2hex(unsigned long number, char *result) {
    char hexDigits[] = "0123456789abcdef";
    int i;


    for (i = 0; i < 16; i++) {
        result[i] = ' ';
    }

    result[16] = '\0';

    i = 15;


    if (number == 0) {
        result[i] = '0';
        return;
    }

    while (number > 0 && i >= 0) {
        result[i] = hexDigits[number % 16];
        number /= 16;
        i--;
    }
}

int main() {
    unsigned long number;
    char result[17];

    printf("Enter a decimal number: ");
    scanf("%lu", &number);

    decimal2hex(number, result);

    printf("Hexadecimal: \"%s\"\n", result);

    return 0;
}