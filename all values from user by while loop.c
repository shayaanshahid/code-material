#include<stdio.h>
void main()
{
    int num,table,counter,cycles;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Enter the number you want to multiply:");
    scanf("%d",counter);
    printf("Enter number you want the table to end:");
    scanf("%d",&cycles);
    while(counter<=cycles)
    {
        table=num*counter;
        printf("%d*%d=%d\n",num,counter,table,table=num*counter);
        counter++;
