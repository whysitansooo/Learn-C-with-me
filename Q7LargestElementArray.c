//? Find the second largest element in the given Array

// #include <stdio.h>
// #include <limits.h>
// int main()
// {
//     int arr[8]={1,2,3,4,5,6,7,7};
//     int max = INT_MIN;
//     int smax = INT_MIN;
//     for(int i=0;i<8;i++){
//         if(max<arr[i]){
//             max = arr[i];
//         }
//     }
//     for(int i=0;i<8;i++){
//         if(arr[i]!=max && smax<arr[i]){
//             smax = arr[i];
//         }
//     }
//     printf("%d",smax);
// }

//! Optimized solution of the above question

// #include <stdio.h>
// #include<limits.h>
// int main()
// {
//     int arr[7] = {1,2,3,4,4,7,5};
//     int max = INT_MIN;
//     int smax = INT_MIN;

//     for(int i=0;i<7;i++){
//        if(max<arr[i]){
//         smax = max; //*smax is now previous max
//         max = arr[i]; //*max is now a new max
//        }

//        else if(smax<arr[i] && max!=arr[i]){
//         smax = arr[i];
//        }

//     }
//     printf("%d",smax);
    
// }
