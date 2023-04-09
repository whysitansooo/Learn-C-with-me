#include<stdio.h>
int main()
{
    int num1,num2,add,sub,div,pro,mod;
    printf("Enter your first number: ");
    scanf("%d",&num1);
    printf("Enter your second number: ");
    scanf("%d",&num2);
    
    add = num1 + num2;
    sub = num1 - num2;
    pro = num1 * num2;
    mod = num1 % num2;
    printf("%d",add);
    return 0;
}