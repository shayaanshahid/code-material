#include <stdio.h>
void main()
{
    int num1,num2;
    printf("enter first number :");
    scanf("%d",&num1);
    printf("enter second number :");
    scanf("%d",&num2);
    if (num1>num2)
        printf("%d is greater than %d",num1,num2);
    else
        printf("%d is greater than %d",num2,num1);
}
