#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter length of the sides of a triangle\n");
    scanf("%d\n%d\n%d",&a,&b,&c);
    if((a+b)>c && (a+c)>b && (b+c)>a)
    printf("triangle  is valid");
    else 
    printf("triangle is not valid");
    return 0;
}