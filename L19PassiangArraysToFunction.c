// #include<stdio.h>
// void fun(int x[]){
//     x[0] = 10;
//     return;
// }

// int main()
// {
//     int arr[5] = {1,2,3,4,5};
//     printf("%d\n",arr[0]);
//     fun(arr);
//     printf("%d",arr[0]);
//     return 0;
// }

//? Swapping Two numbers using arrays and function

#include<stdio.h>
void swap(int x[]){
    int temp;
    temp = x[0];
    x[0] = x[1];
    x[1] = temp;
    return;

}
int main()
{
    int arr[2] = {2,9};
    printf("Before swapping numbers %d - %d\n",arr[0],arr[1]);
    swap(arr);
    printf("After swapping %d - %d",arr[0],arr[1]);

}

//? When you pass an array as an argument to a function, What actually gets passed?
//* Ans- Address of the first element of the array.