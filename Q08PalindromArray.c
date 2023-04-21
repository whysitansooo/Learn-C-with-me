//? Write a program to check if it palindrome or not

#include <stdio.h>
void Palindrome(int arr[],int n){
    int i = 0;
    int j = n-1;
    
    while(i<j){
        if(arr[i] == arr[j]){
             i++;
             j--;
        }
        else{
            printf("Hell nah its a goofy array");
            return;
            
        }
       

    }
    printf("This array is Palindrome");
   
   
    
}

int main()
{   
    int n;
    printf("Enter the size of the Array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    Palindrome(arr,n);


}
