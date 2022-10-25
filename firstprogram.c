#include <stdio.h>

int main(){
   int x=7;
   int y=10;
   int z=5;
   int result = 0;
   result = (z-5)||(x++);
   printf("result: %d\n", result);
   printf("x: %d\n", x);
   printf("y: %d\n", y);
   printf("z: %d\n", z);




return 0;
}