#include <stdio.h>
void main()
{
    int num;
    printf("enter rows :");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++)
    {printf("*");}
    printf("\n");}

}
