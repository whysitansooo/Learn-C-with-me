//? WAP to check if a number is prime or not
#include<stdio.h>
void main()
{
    int n;
    int a;
    printf("Enter your number: ");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0) //! i is factor of n
        a =1;
        break;
    }
    if(n==1){
        printf("Neither Prime nor composite");
    }
    else if(a==1){
        printf("Composite number");
    }
    else{
        printf("Prime number");
    }
}