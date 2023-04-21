//? Print the factorials of number using function

#include <stdio.h>
int Factorials(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact = fact*i;
    }
    return fact;
}
int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    int Fact = Factorials(n);
    printf("The factorials of the given number is: %d",Fact);
}
