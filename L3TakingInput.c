//! In order to take input from the user and assign it to a variable, we use scanf function*/

//! & is the "address of" operator and it means that the supplied value should be copied to the address which is indicated by variable i*/

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a \n");
    scanf("%d" , &a);
    printf("Enter the value of b \n");
    scanf("%d", &b);

    printf("The sum of a and b is %d\n",a+b);
    printf("The difference of a and b is %d",a-b);
    return 0;
}

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    printf("%d",num);
}

#include<stdio.h>
int main()
{
    int num,num2;
    printf("Enter number:\n");
    scanf("%d",&num);
    printf("Enter number:\n");
    scanf("%d",&num2);

    printf("\n Max=%d",num>num2?num:num2);
    printf("\n Min=%d",num<num2?num:num2);

}

