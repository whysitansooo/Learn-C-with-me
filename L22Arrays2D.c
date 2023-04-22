//! Basic Syntax

// #include <stdio.h>
// int main(){
// int arr[2][2];  //* Declaration of a 2-Dimensional Array
// //* Initialisation
// arr[0][0] = 1;
// arr[0][1] = 2;
// arr[1][0] = 3;
// arr[1][1] = 4;
//*This looks something like this:

//* 1 2
//* 3 4
//}

//! Different way of initialisation
//cow  int arr[2][2] = {{1,2},{3,4}};
//cow  int arr[][3] = {{1,2,3},{4,5,6}};

//! Incorrect way of initialisation
//cow   int arr[2][];
//cow   int arr[][];




//? How to print the elements of 2D arrays taking user input

#include<stdio.h>
int main()
{
    int r;
    printf("Enter the number of row: ");
    scanf("%d",&r);
    int c;
    printf("Enter the number of columns: ");
    scanf("%d",&c);

    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<r;i++){
        for(int j =0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}





