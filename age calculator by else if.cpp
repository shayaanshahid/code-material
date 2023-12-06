#include <stdio.h>
int main()
{
    int age;
    printf("enter your age");
    scanf("%d",&age);
    if(age<=13&&age>=1 )
        printf("you are a child");
    else if (age<=18&&age>13)
        printf("you are a teenager");
    else if (age<=30&&age>18)
        printf("you are an adult");
    else if (age<=50&&age>30)
        printf("you are a grown up");
    else if(age>50)
        printf("you are pretty old");
        else
            printf("wrong input");
        return 0;

}
