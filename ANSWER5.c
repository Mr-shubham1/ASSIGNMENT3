#include<stdio.h>
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    if(a>=100&&a<=999)
    printf("%d is three digit number",a);
    else
    printf("%d is not three digit number",a);
    return 0;
}