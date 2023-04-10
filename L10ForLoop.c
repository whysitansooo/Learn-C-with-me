//*Loop Basic
#include<stdio.h>
 int main()
 {  
    int x = 5;
    for(int i = 1; i<=5;i=i+1){
        printf("Hello Saturn\n");
    }  
 }

//?Q-Print hello world 'n' times. Take 'n' as input from user
#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Hello World\n");
    }
}

//? Q-Print odd numbers from 1 to 100
#include <stdio.h>
void main()
{
    int i;
    for(i=1;i<=100;i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
}

//?Q - Print the table by taking user input
#include <stdio.h>
void main()
{
    int i,n;
    scanf("%d",&n);
    for(i=n;i<=n*10;i=i+n){
        printf("%d ",i);
    }
}

//?Q- Display this AP - 1,3,5,7,9....upto 'n' terms

#include <stdio.h>
void main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i=i+2){
        printf("%d ",i);
    }
}

//?Q- Display this AP- 4,7,10,13,16
#include <stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=4;i<=3*n+1;i=i+3){ //AP formula = an = a+(n-1)*d
        printf("%d\t",i);
    }
}

//!Without  using mathmatical formula
//4,7,10,13....upto n terms 
#include<stdio.h>
void main()
{
    int n; //!itni baar loop chalega
    printf("Enter a number: ");
    scanf("%d",&n);

    //!We are going to use extra variables
    int a = 4;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a = a+3;
    }

}

//? Display this GP- 1,2,4,8,16,32....upto 'n' terms 
//! I did it myself
#include<stdio.h>
void main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a = a*2;
    }
}

//? Display this AP-100,97,94...upto all terms which are positive
//! I did it myself Ez!
#include <stdio.h>
void main()
{
    for(int i=100; i>=0;i=i-3){
        printf("%d ",i);  
    }
}

//? Display this GP-100,50,25....upto 'n' terms

#include<stdio.h>
void main()
{
    int n;//Itni baar loop chalega
    printf("Enter your number: ");
    scanf("%d",&n); 
    float a=100;
    for(int i=1;i<=n;i++){
        printf("%.2f ",a);
        a = a/2;       
    }
}