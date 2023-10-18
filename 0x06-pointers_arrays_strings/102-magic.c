#include <stdio.h>

int main(void)
{
   int number;
   int array[5];
   int *pointer_to_number;

   array[2] = 1024;
   pointer_to_number = &number;

  /*
   * Assignment operation to the 5th index position 
   * ahead of pointer_to_number in the memory. Not allowed to use 'array'. 
   * Not allowed to modify pointer_to_number. Only one statement is allowed here. 
   */

    *(pointer_to_number + 5) = 98;

   /* Prints 98 as per the assignment above */
   printf("array[2] = %d\n", array[2]);
   return (0);
}
