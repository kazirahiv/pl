#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fs, *ft;
    char ch;
    fs = fopen("chod.txt", "r");
    if(fs==NULL) { printf("Cant open file");}
    ft = fopen("encr.txt", "w");
    if(ft==NULL) { printf("Cant open file");}
    while(!feof(fs)){
        ch = fgetc(fs);
        switch(ch){
    case 'r':
        ch = 's';
        break;
    case 'a':
        ch = 'a';
        break;
    case 'h':
        ch = 'd';
        break;
    case 'i':
        ch = 'i';
        break;
    case 'v':
        ch = 'a';
        break;
        }
        fputc(ch, ft);
        printf("%c", ch);
    }
    fclose(ft);
    fclose(fs);
    }
