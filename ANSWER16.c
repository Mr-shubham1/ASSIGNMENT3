#include<stdio.h>
int main()
{
    
    char a=1;

    printf("enter a character\n");
    scanf("%c",&a);
    if(a>='A'&& a<='Z')
    printf("%c is an uppercase alphabet",a);
  else if(a>='a'&&a<='z')
  printf("%c is a lowercase",a);
  else if(a>='0'&&a<='9')
  printf("%c is a digit",a);
  else
  printf("%c is a special character",a);

  return 0;
    
}
