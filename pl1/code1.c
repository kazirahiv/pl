#include<stdio.h>
char concat(char z[], char y[]);
char compare(char a[], char b[]);
int main()
{
char ar[25] = "hello";
char br[]= "rahiv";
concat(ar, br);
}

char concat(char z[], char y[]){
    int length, x=0, i, f=0;
    while(z[x] != '\0'){
        length++;
        x++;
                }
    for(i=length, f=0; i<25, f<25; i++, f++){
            z[i] = y[f];
                }
    z[i] = '\0';
    for(i=0; i<11; i++){
        printf("%c", z[i]);
        }
 compare(z, y);
}

char compare(char a[], char b[]){
 int i, j, len=0, len2=0;
 for(i=0; a[i]!='\0'; i++){
            len++;
            }
    printf("\nLenth %d", len);
 for(i= 0, j=0; b[j]!='\0'; j++){
        if(a[i]==b[j]){
            len2++;
            i++;
            }
        else{ break; }
            }
        if(len2 == len ){
            printf("\nEqual");
            }
        else
            printf("\nNot Equal");
    }
