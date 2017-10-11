#include <stdio.h>
int main(){
int num, a, b, c, d, e, f, g, h, rev;
scanf("%d", &num);
a = num/10000;
b = num%10000;
c = b/1000;
d = b%1000;
e = d/100;
f = d%100;
g = f/10;
h = f%10;
rev = h*10000+g*1000+e*100+c*10+a*1;
printf("%d", rev);
if(num == rev){
printf("They're equal");
}else { printf("The aint"); }



}
