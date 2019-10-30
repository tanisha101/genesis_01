#include <stdio.h>

int main() {
   int a, b, c, n;

   n = 4;

   a = b = 1;
   
   printf("%d %d ",a,b);

   for(int i = 1; i <= n-2; i++) {
      c = a + b;
      printf("%d ", c);
      
      a = b;
      b = c;
   }
   
   return 0;
}
