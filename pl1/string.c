#include<stdio.h>
int main(){
char arr[]= "Rahiv";
char *ptr;
ptr = arr;
for(i=*ptr; i!= '\0'; i++){
printf("%c", *ptr);
ptr++;

}

}
