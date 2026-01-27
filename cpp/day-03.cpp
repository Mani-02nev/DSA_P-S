#include <stdio.h>
int main()
{
     int array[] = {5, 3, 8, 6, 2, 7, 4, 1, 0, 9};
     int size = sizeof(array) / sizeof(array[0]);
     printf("Original Array: ");
     for (int i = 0; i < size; i++)
     {
          printf("%d ", array[i]);
     }
     printf("\n");
     printf("Reversed Array: ");
     for (int i = size - 1; i >= 0; i--)
     {
          printf("%d ", array[i]);
     }
     printf("\n");
     return 0;
}