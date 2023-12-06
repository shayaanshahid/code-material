#include <stdio.h>
void main()
{
    int sales,salary;
    printf("enter your sales : ");
    scanf("%d",&sales);
 while(sales>0)
 {
     int salary=200+sales*9/100;
     printf("salary = %d\n",salary);
     printf("enter your sales(put 0 to exit) : ");
     scanf("%d",&sales);
 }
    }
