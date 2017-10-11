#include <stdio.h>

int main ()
{
   char yourname[100];
   int yourage;

   printf("Whats your name?\t");
   scanf("%s",yourname); //i let you read the doc to avoid overflow :)
   printf("your name is %s \n",yourname);
   return(0);
}
