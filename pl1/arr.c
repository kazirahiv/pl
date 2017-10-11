#include <stdio.h>
int main()
{
     int max[100], i, n, sum = 0, maximum;
     printf("Enter size of array: ");
     scanf("%d", &n);
     for(i=0; i<n; ++i)
     {
          printf("Enter elements at a[%d]: ",i+1);
          scanf("%d", &max[i]);

     }
     for (i = 1; i < n; i++)
    {
        if (maximum < max[i])
            maximum = max[i];
    }

     printf("The maximum element is = %d", maximum);

     return 0;
}
