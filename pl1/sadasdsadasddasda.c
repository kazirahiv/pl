#include<stdio.h>
#include<stdlib.h>
int main() {
 FILE *fp;
 char s[100];
 fp = fopen("hagy.txt", "r+");
 if(fp == NULL){ puts("Cant open "); }
 while(fgets(s, strlen(s)-1, fp) != NULL ){
    printf("%s",s );
    }

    }
