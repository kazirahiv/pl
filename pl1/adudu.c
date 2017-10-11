#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *fp;
    char s[80];
    fp = fopen("poem.txt", "w");
    if(fp == NULL){
        puts("Cannot open text file");
        exit(1);
        }
    printf("Write something \n");
    gets(s);
    while(strlen(s)>0){
        fputs(s,fp);
        fputs("\n",fp);

            }
    fclose(fp);
    }
