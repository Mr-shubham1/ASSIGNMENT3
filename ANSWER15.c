#include<stdio.h>
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    if(a>0)
    printf("%d is positive number",a);
    else
    {
        if(a==0)
        printf("%d is zero",a);
        else
        printf("%d is negative number",a);
    }
    return 0;
}