//! Pointers - Variable ka address store karta hai
//! Can be a type int, char, array, function or any other pointer
//! Pointer in C can be declared by using * (asterisk symbol)
#include <stdio.h>
int main()
{

int a = 5;
int* x = &a;
printf("%d",*x); 
}

//?Swapping values without using functions

#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    temp = a;
    a = b;
    b = temp;
    printf("Now a will be: %d\n",a);
    printf("Now b will be: %d",b);

    
}

 
//? Swapping two number using pointers and function

#include<stdio.h>
void  swap(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    return;
}
int main()
{
     
}