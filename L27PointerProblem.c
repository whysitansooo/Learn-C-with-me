#include <stdio.h>
typedef int* Pointer;

int main()

{
    int x=5,y=10;
    Pointer p,q; //*For compiler -> int* p and int y
    p = &x;
    q = &y;
   
    printf("%p\n",p);
    printf("%p",q);
}