#include <stdio.h>
int main()
{
int num, a, b, c, d, e, f, g, h, i, j, k,l;
printf("Please enter a amount of currency ");
scanf("%d", &num);
a = num/100;
b = num%100;
c = b/50;
d = b%50;
e = d/10;
f = d%10;
g = f/5;
h = f%5;
i = h/2;
j = h%2;
k = j/1;
l = j%1;
printf("Number of 100 Rs %d \n", a);
printf("Number of 50 Rs %d \n ", c);
printf("Number of 10 Rs %d \n", e);
printf("Number of 5 Rs %d \n", g);
printf("Number of 2 Rs %d \n", i);
printf("Number of 1 Rs %d \n", k);
return 0;
}
