#include <stdio.h>

void main() {
    int num1, num2, num3, num4, num5; // declaration

    printf("Give num1: "); // first variable
    scanf("%d", &num1);

    printf("Give num2: "); // second variable
    scanf("%d", &num2);

    printf("Give num3: "); // third variable
    scanf("%d", &num3);

    printf("Give num4: "); // fourth variable
    scanf("%d", &num4);

    printf("Give num5: "); // fifth variable
    scanf("%d", &num5);

    int greatest = num1;

    if (num2 > greatest)
        greatest = num2;
    if (num3 > greatest)
        greatest = num3;
    if (num4 > greatest)
        greatest = num4;
    if (num5 > greatest)
        greatest = num5;

    if (num1 == num2 && num2 == num3 && num3 == num4 && num4 == num5)
        printf("Numbers are equal.");
    else
        printf("%d is the greatest of them all", greatest);


}


