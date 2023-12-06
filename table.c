#include <stdio.h>
void main()
{
   int i,e,f;
   printf("what do u want to multiply :");
   scanf("%d",&i);
   e = 1;
    do{
            f = i*e;
        printf("%d*%d=%d\n",i,e,f);
        e++;


    }
    while(e<=10);
}
