#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num%5==0){
        if(num%3==0){
            if(num%15!=0){
                printf("The number is cool");
            }
            else{
                printf("The number is not cool");
            }
        }
    }
    else{
        printf("Number is not cool");
    }
    return 0;
}

//Q- Divisible by 5 or 3 but not 15
#include<stdio.h>
int main()
{
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);

    if((num%5==0 || num%3==0) && num%15!=0){
        printf("The number is divisible by both 5 and 3 but no 15");

    }
    else{
        printf("Not matching the condition");
    }
}

//Q- Program to find out the greatest of three numbers
#include <stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter your 1st number: ");
    scanf("%d",&num1);
    printf("Enter your 2nd number: ");
    scanf("%d",&num2);
    printf("Enter your 3rd number: ");
    scanf("%d",&num3);

   if(num1>num2){ //num2 is out of race
    if(num1>num3){
        printf("Num1 is greatest %d",num1);
    }
    else{
        printf("Num3 is greatest %d",num3);
    }
   }
   else{
    if(num2>num1){ //num1 is out of race
        if(num2>num3){
            printf("Num2 is the greatest %d",num2);
        }
        else{
            printf("Num3 is greatest %d",num3);
        }

    }
   }
   return 0;
}

//Q- If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three.

#include<stdio.h>
int main()
{
    int Ram,Shyam,Ajay;
    printf("Enter the age of Ram: ");
    scanf("%d",&Ram);
    printf("Enter the age of Shyam: ");
    scanf("%d",&Shyam);
    printf("Enter the age of Ajay: ");
    scanf("%d",&Ajay);

    if(Ram<Shyam){
        if(Ram<Ajay){
            printf("Ram is the youngest %d",Ram);

        }
        else{
            printf("Ajay is the youngest %d",Ajay);
        }
    
    }
    else{
        if(Shyam<Ram){
            if(Shyam<Ajay){
                printf("Shyam is the youngest %d",Shyam);

            }
            else{
                printf("Ajay is the youngest %d",Ajay);
            }
        }
    }
    return 0;
}
