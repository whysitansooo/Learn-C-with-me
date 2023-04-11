#include<stdio.h>
int main()
{
    int x = 2;
    int y = 3;

    printf("The value of 3*x - 8*y is %d \n",3*x - 8*y);
    printf("The value of 8*y - 3*x is %d",8*y/3*x);
    //What should happen:- 8*3/3*2= 24/6 = 4
    //What is happening:- 8*3/3*2 = 24/3*2 = 8*2 = 16 
    
    return 0;
}

