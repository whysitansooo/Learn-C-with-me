//? Searching in array

#include <stdio.h>
int main()
{
    int arr[7] = {12,21,21,42,21,6,7};
    int x = 21;
    int check = 0; //* 0 means element is not present
    for(int i=0;i<7;i++){
        if(arr[i]==x){
            check = 1; //* 1 means element is present
            break;
        }

    }
    if(check==0){
        printf("%d element is not present in the array",x);
    }
    else{
        printf("%d element is present",x);
    }
}

//! Searching using Bool datatype

#include <stdio.h>
#include <stdbool.h>
int main()
{
     int arr[7] = {12,9,21,42,21,6,7};
    int x = 21;
    int idx;
    bool flag = false; //* this means element is not present
    for(int i=0;i<7;i++){
        if(arr[i]==x){
            flag= true; //* this means element is present
            idx = i;
            break;
        }

    }
    if(flag==false){
        printf("%d element is not present in the array",x);
    }
    else{
        printf("%d element is present and index is: %d",x,idx);
    }
}
