#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf(" enter your marks\n");
    scanf("%d\n%d\n%d\n%d\n%d",&a,&b,&c,&d,&e);
    if((a<33)||(b<33)||(c<33)||(d<33)||(e<33))
    printf("failed");
    else
    printf("passed");
    return 0;
}