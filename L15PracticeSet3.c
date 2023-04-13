//? WAP to count digits of a given number

//! I did it myself
#include<stdio.h>
void main()
{
    int count,num;
    printf("Enter your number: ");
    scanf("%d",&num);
    count = 0;
    while(num>0){
        num = num/10;
        count = count+1;
        
    }
    printf("Digit:%d" ,count);

}

//? WAP to print sum of digit of a given number
#include<stdio.h>
void main()
{
   int sum,num,LastDigit;
   sum = 0;
   LastDigit = 0;
   printf("Enter your number: ");
   scanf("%d",&num);
  

   while(num>0){
    LastDigit = num%10;
    sum = LastDigit+sum;
    num = num/10;
    

   }
   printf("The sum of the digits is: %d",sum);
}

//? WAP to print sum of all the even digits of a given number
//! I did it myself ez
#include<stdio.h>
void main()
{
    int num,even,sum;
    sum = 0;
    printf("Enter your number: ");
    scanf("%d",&num);
    while(num>0){
        even = num%10;
        if(even%2==0){
            sum = even+sum;
        }
        

        num = num/10;
    }
    printf("The sum of the even digits is: %d",sum);
}

//?WAP to print reverse of a given number
//! I did it myself ez
#include<stdio.h>
void main()
{
    int num,LastDigit;
    printf("Enter your number: ");
    scanf("%d",&num);
    while(num>0){
        LastDigit = num%10;
        printf("%d",LastDigit);
        num = num/10;
        
    }
    
}

//?Print the sum of this series 1-2+3-4+5-6...upto 'n'
#include<stdio.h>
void main()
{
    int n,sum =0; //*How many times loop will run
    printf("Enter the n term: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            sum = sum + i;
        }
        else 
        sum = sum - i;
        
    }
    printf("%d",sum);
    
}

//? Factorial of a given number 'n'
// #include <stdio.h>
// void main()
// {
//     int num,fact=1;
//     printf("Enter your number: ");
//     scanf("%d",&num);
//     for(int i=1;i<=num;i++){
//         fact = fact * i;
//         printf("\n%d",fact);

//     }
//      printf("%d",fact);
// }

//?! Print the nth Fibonacci number
#include<stdio.h>
void main()
{
    int n,sum,a,b;
    printf("Enter your number: ");
    scanf("%d",&n); 
    a = 1;
    b = 1;
    sum = 1;
    for(int i=1;i<=n-2;i++){
        sum = a+b;
        a = b;
        b = sum;
        
    }
    printf("The %dth fibonacci term is %d",n,sum);

} 

//?Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another.

#include<stdio.h>
void main()
{
    int a,b,pro=1;
    printf("Enter your first number: ");
    scanf("%d",&a);
    printf("Enter your second number: ");
    scanf("%d",&b);
    for(int i=1;i<=b;i++){
         pro= pro*a;
    }
    printf("%d ",pro);
   
}

//?Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop. (CAPITAL CASE)
//! Interesting
#include<stdio.h>
void main()
{
   int i = 65;
   while(i<=90){
    printf("%d ->",i);
    char ch = (char)i;
    printf(" %c\n",ch);
    i++;
   }
}

//?!Write a program to print out all Armstrong numbers between 1 and 500. If sum of cubes of each digit of the number is equal to the number itself, then the number is called an Armstrong number. 
//?!For example 153 = (1*1*1)+(5*5*5)+(3*3*3)

#include<stdio.h>

int main()
{
    int i,sum,LastDigit,num;
    for(i=0;i<500;i++){
        num = i;
        sum = 0;
        while(num>0)
        {
            LastDigit = num%10;
            sum = sum+LastDigit*LastDigit*LastDigit;
            num = num/10;
        }
        if(sum==i){
            printf("Armstrong numbers: %d\n",i);
        }
    }
}
