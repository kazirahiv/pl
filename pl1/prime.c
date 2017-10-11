#include<stdio.h>
int prime(num);
int main(){
int num;
scanf("%d", &num);
prime(num);
}
int prime( int num){
int p;
for(p=2; p<num;p++){
    if(num%p==0){
    printf("Not prime");
        break;
        }
    if(num/p==1){
        printf("Prime");
        break;
        }
        }
}


