#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the value of a b c in ax^2+bx+c\n");
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    printf("roots are real and distinct");
    else
    {
        if(d==0)
        printf("roots are real and equal");
        else
        printf("roots are imaginary");
    }
    return 0;
}