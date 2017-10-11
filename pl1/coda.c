#include<stdio.h>
char reverse(char b[], char a[]);
int main(){
    char ar[]="rahiv";
    char br[5];
reverse(br, ar);
    }
char reverse(char b[], char a[]){
int i, j=0;
for(i=4; a[i]!='\0'; i--){
    b[j] = a[i];
    j++;
    }
for(i=0; i<5; i++){
    printf("%c", b[i]);
    }
compare(b, a);
}
void compare(char b[], char a[]){
  int i, j;
  for(i=0, j=0; i<5; i++, j++){
    if(b[i]== a[i]){
        printf("\nEqual");
        break;
        }
    else {printf("\nNot equal");
        break;
        }
    }
    }

