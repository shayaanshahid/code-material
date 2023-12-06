#include<stdio.h>
void main()
{
    float num,sq;char choice;
  do
  {

    printf("\nEnter a number of which square is to be found:");
    scanf("%f",&num);
    sq=num*num;
    printf("\nSquare of %.3f is %.3f",num,sq);
    printf("\nDo you want to run again? (y/n)\t=");
    choice=getche();
  }
    while(choice=='y');
}

