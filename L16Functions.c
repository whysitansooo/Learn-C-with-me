//! Basic function

#include<stdio.h>
void greet(){
    printf("Good Morning\n");
    printf("How are you?");
    return; //Function End
}

int main() //! code always starts from main function
{
    greet();
    return 0;
}

#include<stdio.h>


    void england(){
        printf("You are in England\n");
        return;
    }

    void australia(){
        printf("You are in Australia\n");
        england();
        return;
    }

    void india(){
        printf("You are in India\n");
        australia();
        return;
    }

    int main(){
        india();
        return 0;
    }


//*Sum of Two Numbers;
#include<stdio.h>

int add(int x, int y){
    return x+y;
}

int main()
{
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    int sum = add(a,b);
    printf("%d",sum);
}

//! Library functions
#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("Enter your number: ");
    scanf("%d",&a);
    int root = sqrt(a); //*sqrt function used to return square root of the number
    printf("%d",root);

    int power = pow(a,2); //*pow function used to return (number,its power)

    printf("\n%d",power);
}

//! Function Prototype 

#include<stdio.h>

    void india(){
        void australia();
        printf("You are in India\n");
        australia();
        return;
    }

    void australia(){
        void england();
        printf("You are in Australia\n");
        england();
        return;
    }

    void england(){
        printf("You are in England\n");
        return;
    }

    int main(){
        india();
        return 0;
    }
