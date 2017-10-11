 #include <stdio.h>
 int check(int ara[]);
 int main()
 {
     int ara[10];
     int i;
     for(i=0; i<=9;i++){
     scanf("%d", &ara[i]);
     }
     check(ara);
     return 0;
 }
 int check(int ara[])
 {

     int i;
     for(i = 0; i <= 9; i++) {
         if (ara[i] % 2 == 0) {
             printf("\nEven");
         }
     else { printf("\nOdd"); }
     }
 }
