#include <stdio.h>
void main()
{
    int num1;
    printf("enter your number :");
    scanf("%d",&num1);
    if(num1%5==0)
    printf("it is divisible by 5");
    if(num1%5!=0)
        printf("it is not divisible by 5");

}
