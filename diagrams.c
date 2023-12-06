#include <stdio.h>
int main()
{
  int count=1;
  for(int i=1;i<5;i++)
  {
    for(int j=1;j<5-i;j++)
    {printf(" ");}
    for(int k=0;k=count;k++)
    {printf("*");}
    printf("\n");
    count++;

  }return 0;
}