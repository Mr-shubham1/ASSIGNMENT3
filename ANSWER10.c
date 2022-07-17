#include<stdio.h>
int main()
{
    float c,s,p;
    printf("enter cast price and selling price\n");
    scanf("%f %f",&c,&s);
    if(s>c)
    {
      p=(s-c)/c*100;
      printf("profit is %.2f percentage",p);
    }
    else
    {
        p=(c-s)/c*100;
        printf("loss is %.2f percentage",p);
    }
    return 0;
}