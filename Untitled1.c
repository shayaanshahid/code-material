#include <stdio.h>
int main()
{int liters,kms;
 int totalliters=0;
    int totalkms=0;
printf("enter your liters used :");
    scanf("%d",&liters);
while (liters>0){

    printf("enter the distance :");
    scanf("%d",&kms);
    int sum=liters*100/kms;
    printf("average per 100 kms : %d\n",sum);
    printf("enter your liters used (put 0 to exit):");
    scanf("%d",&liters);
    totalliters=totalliters+liters;
    totalkms=totalkms+kms;
    }
    int totalaverage=totalliters*100/totalkms;
    printf("total average : %d",totalaverage);

return 0;}
