#include <stdio.h>
int main ()
{
   FILE *fp;
   char data[60];
   fp = fopen ("test.c","r+");
   fputs("Fresh2refresh.com is a programming tutorial website", fp);
   rewind(fp);
   while(!feof(fp)){
   fgets ( data, 60, fp );
      printf("Before fseek - %s\n", data);
   }



   // To set file pointet to 21th byte/character in the file
   fseek(fp, 21, SEEK_SET);

   fgets ( data, 60, fp );
   printf("After SEEK_SET to 21 - %s\n", data);

   // To find backward 10 bytes from current position
   fseek(fp, -10, SEEK_CUR);

   fgets ( data, 60, fp );
   printf("After SEEK_CUR to -10 - %s\n", data);

   // To find 7th byte before the end of file
   fseek(fp, -7, SEEK_END);

   fgets ( data, 60, fp );
   printf("After SEEK_END to -7 - %s\n", data);

   // To set file pointer to the beginning of the file
   fseek(fp, 0, SEEK_SET); // We can use rewind(fp); also

   fclose(fp);
   return 0;
}
