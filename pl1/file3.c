#include<stdio.h>
int main(){
    FILE *fp;
    char c;
    fp = fopen("rahiv.txt", "r");
    while(!feof(fp)){
        c = fgetc(fp);
        printf("%c",c);
        }
    fclose(fp);
    getch();
    }
