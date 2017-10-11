#include<stdio.h>
void swapr(int *i, int *j);
int main(){
int a=10, b=20;
swapr(&a, &b);
printf("a =%d b=%d", a,b);
}

void swapr(int *i, int *j){
int t;
t = *i;
*i = *j;
*j = t;

}
