#include<stdio.h>
int main()
{
    int a;
    printf("enter a number\n");
   scanf("%d",&a);
   if(a%3==0||a%7==0)
   printf("%d is divisible by 3 or 7",a);
   else
     printf("%d is not divisible by 3 or 7",a); 
     return 0;
}