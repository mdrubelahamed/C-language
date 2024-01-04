// Selection Sort
#include<stdio.h>

void main()
{
  int a[5];
  int b, s, j; // b for a[b], s for first index value, j for next index value
  int temp = 0; // temp for swapping

  for (b = 0; b < 5; b++)
  {
    printf("\nEnter your value:");
    scanf("%d", &a[b]); // allocating address for every value using '&'
  }

  // Nested loop using for swapping and using the selection sort method
  for (s = 0; s < 4; s++)
  {
    for (j = s + 1; j <= 4; j++)
    {
      if (a[s] > a[j])
      {
        temp = a[s];
        a[s] = a[j];
        a[j] = temp;
      }
    }
  }

  printf("Using Selection Sort Following Result Are:\n");

  for (b = 0; b < 5; b++)
  {
    printf(" %d", a[b]);
  }
}
