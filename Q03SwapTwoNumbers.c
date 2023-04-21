//? Swap two numbers without third variable

#include <stdio.h>
int main()
{
    int a; 
    printf("Enter a: ");
    scanf("%d",&a);
    int b;
    printf("Enter b: ");
    scanf("%d",&b);
    a = (a+b);
    b = a - b;
    a = a - b;
    printf("%d\n",a);
    printf("%d",b);
}
