//*This is without using function

#include <stdio.h>
int main()
{   
    int n,r;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter r: ");
    scanf("%d",&r);
    int nfact=1; //n!
    int rfact=1; //r!
    int nrfact =1; //n-r!
    for(int i=1;i<=n;i++){
        nfact = nfact*i;
    }
    for(int i=1;i<=r;i++){
        rfact = rfact*i;
    }
    for(int i=1;i<=n-r;i++){
        nrfact = nrfact*i;
    }
    int ncr = nfact/(rfact*nrfact);
    printf("%d",ncr);
}

//!Using Function now for above problem. Formula of Combination = n!/(r!*(n-r)!)
#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact= fact*i;
    }
    return fact;
}
int main()
{   
    int n,r,nr = n-r;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter r: ");;
    scanf("%d",&r);
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    printf("%d",ncr); 
}
