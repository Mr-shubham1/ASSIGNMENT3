#include<stdio.h>
int main()
{
    char a;
    printf("enter an alphabet\n");
    scanf("%c",&a);
    if(a>='A'&& a<='Z')
    printf("alphabet you enter is in uppercase");
    else
    printf("alphabet you enter is lowercase");
    return 0;
}