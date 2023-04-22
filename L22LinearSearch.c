// //? Given an array containing elements from 1 to 5 except one element in this range is missing. Find the missing element

#include<stdio.h>
int main()
{   
    int numsSize;
    printf("Enter array size: ");
    scanf("%d",&numsSize);
    int nums[numsSize];
    for(int i=0;i<numsSize;i++){
        printf("Enter %d element: ",i);
        scanf("%d",&nums[i]);
    }   

    int ArraySum=0;
    for(int i=0;i<numsSize;i++){
        ArraySum = ArraySum + nums[i];  
}
int Sn = numsSize*(numsSize+1)/2;
    int missing = Sn - ArraySum;
    printf("missing: %d",missing);
}

//?WAP to find a duplicate element from a given array of integers

#include <stdio.h>
int main()
{
    int arr[5] = {1,2,3,2,5};
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++)
        if(arr[i]==arr[j]){
            printf("%d is the duplicate element",arr[i]);
            break;
        }
    }
}

//?Find the unique number in a given Array where all the elements are being repeated twice with one value being unique
