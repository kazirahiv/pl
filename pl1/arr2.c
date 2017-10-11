#include <stdio.h>

int main () {

   int matrix1[2][2] = { {1,2}, {3,4} };
   int i, j;
   int matrix2[2][2] = { {5,6}, {7,8}};


   for ( i = 0; i < 2; i++ ) {

      for ( j = 0; j < 2; j++ ) {
         printf("a[%d][%d] = %d\n", i,j, matrix1[i][j] );
      }
   }
 for ( i = 0; i < 2; i++ ) {

      for ( j = 0; j < 2; j++ ) {
         printf("a[%d][%d] = %d\n", i,j, matrix2[i][j] );
      }
   }

printf("Result matrix [0][0] = %d\n", matrix1[0][0] + matrix2[0][0] );
printf("Result matrix [0][1] = %d\n", matrix1[0][1] + matrix2[0][1] );
printf("Result matrix [1][0] = %d\n", matrix1[1][0] + matrix2[1][0] );
printf("Result matrix [1][1] = %d\n", matrix1[1][1] + matrix2[1][1]);
   return 0;
}
