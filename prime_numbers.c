#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int check_prime(int n){
   if(n<=1)
   {
      return 0;
   }
   int sqrt_n = (int)sqrt(n);
    for(int i = 2; i <= sqrt(n); i++)
     {
       if(n%i == 0)
       {
         return 0;
       }
     }
       return 1;
}

int main(int argc, char *argv[]) {
    if (argc == 1) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }
    int i;
    int n;
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
   printf("Prime numbers in the range from %d to %d: \n", a, b);
    for(int i = a; i <= b; i++ )
    {
      if(check_prime(i) == 1)
      {
          printf("%d ",i);
      }
    }
     return 0;
}
   
    



