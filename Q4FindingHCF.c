//? Write a function to find the HCF of 2 given numbers

#include <stdio.h>
int min(int a,int b){
    if(a<b) return a;
    else return b;
}

int gcd(int a,int b){
    int hcf;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            hcf = i;
        }
    }
    return hcf;
}
int main()
{
    int a;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    int b;
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    int hcf = gcd(a,b);
    printf("The HCF of %d and %d is: %d ",a,b,hcf);


#include <stdio.h>
int min(int a,int b){
    if(a<b) return a;
    else return b;
}

int gcd(int a,int b){
    int hcf;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            hcf = i;
        }
    }
    return hcf;
}
int main()
{
    int a;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    int b;
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    int hcf = gcd(a,b);
    printf("The HCF of %d and %d is: %d ",a,b,hcf);
}

//! Optimized solution of the above

#include <stdio.h>

int min(int a,int b){
    if(a<b) return a;
    else return b;
}

int gcd(int a, int b){
    int hcf;
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            hcf = i;
            break;
        }
    }
    return hcf;

}
int main()
{
    int a;
    printf("Enter your 1st number: ");
    scanf("%d",&a);
    int b;
    printf("Enter your 2nd number: ");
    scanf("%d",&b);
    int hcf = gcd(a,b);
    printf("The HCF of %d and %d is %d",a,b,hcf );


}
