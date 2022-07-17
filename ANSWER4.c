#include<stdio.h>
int main()
{
    int a,b=1;
    printf("enter a number\n");
    scanf("%d",&a);
    if((a&b)==0)
    printf("%d is even number",a);
    else
    printf("%d is odd number",a);
    return 0;
}