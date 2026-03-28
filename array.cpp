#include <stdio.h>

int main() {
	   int array[10] = {12, 23, 12, 67, 45, 76, 0, 90, 21, 15};
	   int i;
	   printf("Elements of the array are:\n");
	   for(i = 0; i < 10; i++) {
	   	  printf("array[%d] = %d\n" , i, array[i]);
 	  
	   }
	   return 0;
}
