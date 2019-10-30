#include <stdio.h>

int main() {
   int a, b;

   int n = 4;

   a = b = 1;
   
   printf("%d %d ",a,b);

   for(int i = 1; i <= n-2; i++) {
      int c = a + b;
      printf("%d ", c);
      
      a = b;
      b = c;
   }
   
   return 0;
}
