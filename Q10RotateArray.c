//? Rotate the given array 'a' by k steps, where k is non-negative
//! Note: k can be greater than n as well where n is the size of array 'a'

#include <stdio.h>
void reverse(int nums[],int fi,int ei){
    for(int i=fi,j=ei;i<j;i++,j--){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    return;
}

int main()
{
    int n;
    scanf("%d",&n);
    int nums[n];
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    
    int k;
    scanf("%d",&k);

    k = k%n;

    reverse(nums,0,n-1);
    reverse(nums,0,k-1);
    reverse(nums,k,n-1);
    for(int i =0;i<n;i++){
        printf("%d ",nums[i]);
    }
}
