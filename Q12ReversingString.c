//? Reversing a string by user input

#include <stdio.h>

int main()
{
    char str[20];
    printf("Enter the string: ");
    scanf("%[^\n]s",str);
    printf("%s",str);
    //* Size of string
    int size=0;
    int k=0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    //*Reversing
    for(int i=0,j=size-1;i<j;i++,j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("\n%s",str);


}
