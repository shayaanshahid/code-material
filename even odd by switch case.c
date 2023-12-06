#include <stdio.h>
void main()
{
    int num;
    printf("enter the number :");
    scanf("%d",&num);
    switch(num%2)
{
case 1:
    printf("odd");
    break;
case 0:
    printf("even");
    break;

    default:
    printf("invalid input");
}
}
