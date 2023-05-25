//? Write a Programm to find the total number integers with exactly 9 divisors withing the given range N, given a number N.
#include <stdio.h>
int main()
{
   int N;
   scanf("%d",&N);
   int total = 0;
   for(int i=1;i<=N;i++){
      int count =0;
      for(int j=1;j<=N;j++){
         if(i%j==0) count++;
      }
      if(count == 9){
         total++;
         printf("%d ",i);
      }
   }
   printf("\n%d",total);
}
