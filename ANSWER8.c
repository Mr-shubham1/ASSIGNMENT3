#include<stdio.h>
int main()
{
    int a;
    printf("enter the year\n");
    scanf("%d",&a);
    if(a%4==0)
    printf("%d is leap year",a);
    else
    printf("%d is not leap year",a);
    return 0;
    }