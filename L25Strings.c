//! Strings = Character arrays
//! ASCII values:
//* A -> 65
//* a -> 97


#include <stdio.h>
int main()
{
    char arr[5] = {'a','t','s','b','m'};
    printf("%c",arr[0]);
}

#include <stdio.h> 
int main()
{
    char arr[] = "Hi I am Jose Mourinho";
    int i=0;
    while(arr[i]!='\0'){
        printf("%c ",arr[i]);
        i++;
    }
}

//* Input and Output of string without loop

#include <stdio.h>
#include <string.h>
int main()
{
    char str[40];
    scanf("%s",str); //* only the first word will consider 
    scanf("%[^\n]s",str); //* We can take input of entire sentence by this 
     gets(str); //* Entire sentence can be input 

    printf("Your input is: %s\n",str);
    puts(str);
}

//     puts("The reverse is: "); //* Automatically gives \n at end
