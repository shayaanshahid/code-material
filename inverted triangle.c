#include <stdio.h>
void main()
{
int num;
int m=1;
printf("enter rows");
scanf("%d",&num);
for(int i=1;i<=num;i++)
{
    for(int j=num;j>i;j--)
        {printf(" ");}
        for(int k=0;k<m;k++)
        {
            printf("*");
        }
        m++;
        printf("\n");

}
}
