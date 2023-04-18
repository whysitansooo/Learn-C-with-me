//! Pointer basics

#include<stdio.h>
int main()
{
    int a=76;
    int *pointer_a = &a;
    


    printf("The address of  pointer_a is: %p\n",&pointer_a);
    printf("The address of a is: %p\n",&a);
    printf("The address of a is: %p\n",pointer_a); 
    printf("The value of a is: %d",*pointer_a);
    
    
}

//? Swapping two numbers using call by reference

#include<stdio.h>
void swap(int *x,int *y){
     int temp = *x;
     *x = *y;
     *y = temp;
     return;
     
}
int main()
{
    int a,b,temp;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("\nValue of a now: %d",a);
    printf("\nValue of b now is: %d",b);
}

//?Given two numbers a and b, add them subtract them and assign them to a and b using by reference

#include <stdio.h>
//fuction(Call by reference) for add or subtract
void addSub(int *a1, int *b1)
{
    int temp;
    temp = *a1;
    *a1 = *a1 + *b1;
    *b1 = temp - *b1;

    return;
}

int main()
{
    //variable declaration
    int a = 8, b = 6;
    //print to user
    printf("Before running the function, the value of a = %d and value of b = %d\n", a, b);
    //function call for change the values
    addSub(&a, &b);
    //after using function print to user
    printf("After running the function, the value of a = %d and value of b = %d\n", a, b);

    return 0;
}

//**Another solution

#include <stdio.h>
void addsub(int *x,int *y){
    int temp = *x;
    *x = *x + *y;
    *y = temp - *y;
    return;
}
int main()
{
    int a,b;
    a = 4;
    b = 3;
    printf("The value of a is %d and b is %d",a,b);
    addsub(&a,&b);
    printf("\nAfter using function:- a is %d and b is %d",a,b);
}
