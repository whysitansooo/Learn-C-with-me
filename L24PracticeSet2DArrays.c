//? Write a program to store roll number and marks obtained by 4 students side by side in a matrix

#include<stdio.h>
int main()
{
    int arr[4][2];
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){ 
            scanf("%d",&arr[i][j]);
        }

    }
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

//? Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns

#include <stdio.h>
int main()
{
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

//? Write a program to add two matrices

#include <stdio.h>
int main()
{
    int arr[2][2] = {{1,2},{3,4}};
    int brr[2][2] = {{5,6},{7,8}};
    int res[2][2];

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            res[i][j] = arr[i][j]+brr[i][j];
        }
    }
     for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
// }

//* Doing the above question without using extra array
#include <stdio.h>
int main()
{
    int arr[2][2] = {{1,2},{3,4}};
    int brr[2][2] = {{5,6},{7,8}};

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            arr[i][j] = arr[i][j]+brr[i][j];
        }
    }
    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}

//? Find the Sum of a given matrix of n * m

#include <stdio.h>
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
    printf("\nThe matrix is: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum = sum+arr[i][j];
        }
    }
    printf("The sum of the 2D array is: %d",sum);
}

//? Find out the max and min element in a 2D array

#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[3][3] = {{4,8,2},{1,24,24},{7,100,9}};
    int min = INT_MAX;
    int max = INT_MIN;
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]<min){
                min = arr[i][j];
                
            }
        }
         
    }
   

     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]>max){
                max = arr[i][j];
            }
        }
    }

    printf("The smallest value in the array: %d and index: %d\n",min);
    printf("The greatest value in the array: %d",max);
}
