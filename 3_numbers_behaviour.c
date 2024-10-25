#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter A value:");
    scanf("%d",&a);
    printf("Enter B value:");
    scanf("%d",&b);
    printf("Enter C value:");
    scanf("%d",&c);
    if (a>b && a>c && b!=c)
    {
        printf("A is greater");
    }
    else if (a>b && a>c && b==c)
    {
        printf("A is greater, both B and C are same");
    }
  else  if (b>c && b>a && a!=c)
    {
        printf("B is greater");
    }
    else if (b>a && b>c && a==c)
    {
        printf("B is greater, both A and c are same");
    }
     else if (c>b && c>a && a!=c)
    {
        printf("C is greater");
    }
    else if (c>b && c>a && a==b)
    {
        printf("C is greater, both A and B are same");
    }
    else if (c<b && c<a && b==a)
    {
        printf("C is smaller, both A and B are same");
    }
    else if (b<a && b<c && a==c)
    {
        printf("B is smaller, both A and C are same");
    }
    else if (a<b && a<c && b==c)
    {
        printf("A is smaller, both B and C are same");
    }
    else {
        printf(" All are same");
    }
    return 0;
}
