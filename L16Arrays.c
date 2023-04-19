//! Basic 
#include<stdio.h>
void main()
{
    int arr[5] = {2,4,6,8,1};
    printf("%d\n",arr[0]);

    //* Updating array elements
    arr[0] = 1500; //*{1500,4,6,8,1}
    printf("%d\n",arr[0]);
}

//! Printing Output and Input using Loops
#include <stdio.h>
void main()
{
    int arr[5];
    for(int i=0;i<=4;i++){
        printf("\nEnter element number %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=4;i++){
        printf("%d ",arr[i]);
    }
}

//? Take a array as Input from the User and print it in reverse

#include<stdio.h>
void main()
{
    int arr[5];
    for(int i=0;i<=4;i++){
        printf("\nEnter your number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=4;i>=0;i--){
        printf("%d ",arr[i]);
        
    }
}

//? Given an array of marks of students, if the mark of any student is less than 35 print its roll number. [roll number here refers to the index of the array]
#include<stdio.h>
void main()
{
    int arr[5]={45,87,66,32,21};
    for(int i=0;i<5;i++){
        if(arr[i]<35)printf("Roll Number:%d ",i);
    }
}

//! Memory allocation in arrays
#include<stdio.h>
void main()
{
    int arr[4]={1,2,3,4};
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%p",&arr[3]);
    
} 

//? Calculate the sum of all the elements in the given array

#include<stdio.h>
void main()
{   
    int sum = 0;
    int arr[4]={2,4,5,6};
    for(int i=0;i<4;i++){
        sum = sum+arr[i];

       
    }
    printf("%d\n",sum);
    
}

//! Taking Input of array size
#include<stdio.h>
void main()
{
    int n;
    
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

//? Calculate the product of all the elements in the given array

#include<stdio.h>
void main()
{
    int arr[6]={1,2,5,3,8,9};
    int pro = 1;
    for(int i=0;i<6;i++){
        pro = pro*arr[i];
    }
    printf("The product of the array is: %d",pro);
}

//? Find the maximum value of all the elements in the array

#include<stdio.h>
void main()
{
    int arr[8]={9,2,11,13,3,4,8,7};
    int max = arr[0]; //* Storing first value of the array
    for(int i=0;i<8;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("The max number is: %d",max);
}
