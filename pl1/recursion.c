#include<stdio.h>
int rec(int);
int main(){
int num, factorial;
scanf("%d", &num);
factorial = rec(num);
printf("%d", factorial);
}

int rec(int x){
int fact;
if(x==1)
    return(1);
else
    fact = x*rec(x-1);
    return fact;


}
