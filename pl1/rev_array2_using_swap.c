#include<stdio.h>
int main(){
int num[] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
int temp;
int i,j;
for(i=0, j=9; i<10 && i<j; i++, j--){
temp = num[j];
num[j] = num[i];
num[i] = temp;

}
for(i=0; i<=9; i++){
printf("%d\n", num[i]);

}
}
