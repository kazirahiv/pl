#include<stdio.h>

int payment(int x);
int main(){
int i, h;
for(i=1; i<=20; i++){
scanf("%d", &h);
payment(h);
}
}
int payment(int x){
int extra;
if(x>=40){
extra = x-40;
printf("%d", extra*150);

}
else {
printf(" No Payment");
}

}
