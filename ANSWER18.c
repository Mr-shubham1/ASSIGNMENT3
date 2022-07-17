#include<stdio.h>
int main()
{
    int a;
    printf("enter month number\n");
    scanf("%d",&a);
    if((a==1)||(a==3)||(a==5)||(a==7)||(a==8)||(a==10)||(a==12))
    printf("number of days in month %d is 31",a);
    else if(a==2)
    printf("number of days in month %d is 28 or 29",a);
    else
    printf("number of days in month %d is 30 ",a);
    return 0;
}