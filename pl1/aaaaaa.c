#include <stdio.h>
int main(void)
{
 for (int i=2; i<10; i++)
 {
  for (int j=2; j<=i; j++)   // Changed upper bound
  {
    if (i == j)  // Changed condition and reversed order of if:s
      printf("%d\n",i);
    else if (i%j == 0)
      break;
  }
 }
}
