#include <stdio.h>
void main()
{
    int num1,num2,num3,num4; //declaration

    printf("give num1 :");  //first variable
    scanf("%d",&num1);

    printf("give num2 :");  //second variable
    scanf("%d",&num2);

    printf("give num3 :");  //third variable
    scanf("%d",&num3);

    printf("give num4 :");
    scanf("%d",&num4);

    if (num1>num2&&num1>num3&&num1>num4)
        printf("%d is the greatest of them all",num1);
    if (num2>num1&&num2>num3&&num2>num4)
        printf("%d is the greatest of them all",num2);
    if (num3>num1&&num3>num2&&num3>num4)
        printf("%d is the greatest of them all",num3);
    if (num4>num1&&num4>num2&&num4>num3)
        printf("%d is the greatest of all",num4);
}
