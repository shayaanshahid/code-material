#include <stdio.h>
void main()
{
    int x,y,num,firstdigit,seconddigit,thirddigit,fourthdigit;
    printf("enter your num");
    scanf("%d",&num);
    firstdigit=num%10;
    x=num/10;
    seconddigit=x%10;
    y=x/10;
    thirddigit=y%10;
    fourthdigit=y/10;
    printf("%d%d%d%d",firstdigit,seconddigit,thirddigit,fourthdigit);
}
