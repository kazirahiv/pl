#include<stdio.h>
#include<string.h>
int main(){
    FILE *fileID = fopen("abc.txt","r");
    char str, len;
    char bfr[16];

    str = fgets(bfr,16,fileID);      // str will be set equal to &bfr[0]
    len = strlen(str);              // This gives a warning
    len = strlen((const char)*str);  // This gives a warning
    len = strlen(bfr);               // This does not give a warning
}
