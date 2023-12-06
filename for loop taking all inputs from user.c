#include<stdio.h>
void main()
{
    int num,table;
    printf("Enter a number:");
    scanf("%d",&num);
    int counter;
    printf("Enter the number you want to multiply:");
    scanf("%d",&counter);
    for (counter;counter<=10;counter++)
    {
        /* code */
        printf("%d*%d=%d\n",num,counter,table,table=num*counter);
    }

}
