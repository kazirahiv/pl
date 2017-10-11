#include<stdio.h>
int main(){
int num[] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
int rev[10];
int i, j;
for(i=9, j=0; i>=0, j<=9; --i, j++){
rev[j]= num[i];


}

for(i=0; i<=9; i++){
printf("%d\n", rev[i]);

}


}
