//? Print the n fibonacci series using function
#include<stdio.h>
int fib(int n){
    int a = 1;
    int b = 1;
    int sum;
    for(int i=1;i<=n;i++){
        printf("%d  ",a);
        sum = a+b;
        a = b;
        b = sum;
    }
    return 0;
    
}

int main()
{
    int n;
    printf("Enter your nth term: ");
    scanf("%d",&n);
    fib(n);
}
