#include<stdio.h>
int main(){
int i;
char f;
char letter[5] = "rahiv";
int temp;
for(i=0; i<=5; i++){
if(letter[i]>='a' && letter[i]<='z'){
temp = letter[i]-32;
f = temp;
printf("%c ", f);

}
}
}
