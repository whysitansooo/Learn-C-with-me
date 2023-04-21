//? Reverse part of array

#include <stdio.h>

void rotate(int arr[],int fi, int ei){
    for(int i=fi,j=ei;i<j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }

    int fi,ei;
    printf("Enter the first index: ");
    scanf("%d",&fi);
    printf("Enter the ending index: ");
    scanf("%d",&ei);

    rotate(arr,fi,ei);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
