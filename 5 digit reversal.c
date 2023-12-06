#include <stdio.h>
void main()
{
    int num,x,y,z,firstdigit,seconddigit,thirddigit,fourthdigit,fifthdigit;
    printf("enter num : ");
    scanf("%d",&num);
    firstdigit = num%10;
    x = num/10;
    seconddigit=x%10;
    y=x/10;
    thirddigit=y%10;
    z=y/10;
    fourthdigit=z%10;
    fifthdigit=z/10;
    printf("%d%d%d%d%d",firstdigit,seconddigit,thirddigit,fourthdigit,fifthdigit);
}

