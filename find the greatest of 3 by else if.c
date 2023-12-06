#include <stdio.h>
void main()
{
    int num1,num2,num3; //declaration

    printf("give num1 :");  //first variable
    scanf("%d",&num1);

    printf("give num2 :");  //second variable
    scanf("%d",&num2);

    printf("give num3 :");  //third variable
    scanf("%d",&num3);

    if (num1>num2&&num1>num3)
        printf("%d is the greatest of them all",num1);
    else if (num2>num1&&num2>num3)
        printf("%d is the greatest of them all",num2);
    else if (num3>num1&&num3>num2)
        printf("%d is the greatest of them all",num3);
        else
            printf("invalid input");
}
