// Take positive integer input and tell if it is a three digit number or not

#include<stdio.h>
int main()
{
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);

    if(num>99 && num<1000){
        printf("The number is a three digit number");
    }
    else{
        printf("Ahh shit here we go again");
    }
    return 0;
}

// Q-Take positive integer input and tell if it is divisible by 5 and 3

#include<stdio.h>
int main()
{
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);

    if(num%5==0 && num%3==0){
        printf("The number is divisible by both 5 and 3");
    }
    else{
        printf("The number is not divisible by 5 and 3");
    }
}

// Q- Take 3 positive integers input and print the greatest of them

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("a is greatest of them");
    }
    else if (b > a && b > c)
    {
        printf("b is greatest of them");
    }
    else if (a == b && a == c)
    {
        printf("All are equal");
    }
    else
    {
        printf("c is greatest of them");
    }
}

// Q-Take 3 numbers input and tell if they can be the sides of a triangle

#include <stdio.h>
int main()
{
    int side1, side2, side3;
    printf("Enter the value of side1: ");
    scanf("%d", &side1);
    printf("Enter the value of side2: ");
    scanf("%d", &side2);
    printf("Enter the value of side3: ");
    scanf("%d", &side3);

    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
    {
        printf("This can form a triangle");
    }
    else
    {
        printf("Cannot form a triangle");
    }
    return 0;
}
