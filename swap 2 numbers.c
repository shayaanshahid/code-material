#include <stdio.h>
void main()
{
    int a,b;
    printf("Enter first number=");
    scanf("%d", &a);
    printf("Enter second number=");
    scanf("%d", &b);
    printf("before swap a=%d b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap a=%d b=%d",a,b);
}
