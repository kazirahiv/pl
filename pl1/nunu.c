#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp, *tp;
    int another = 1;
    char ch;
    int newline=0, i;
    struct emp{
        char name[25];
        int age;
        float bs;
        };

    fp = fopen("xz.txt", "r");
   // fseek(fp, 0L, SEEK_END);
    //sz = (int)ftell(fp);
    //rewind(fp);
    while(1){
        ch = fgetc(fp);
        if(ch==EOF){break;}
        if(ch=='\n'){ newline++;}

    } rewind(fp); struct emp e[newline];
    while(newline>0){
        printf("Enter name age nd basic salary\n");

        fscanf(fp,"%s %d %f", e[newline].name, &e[newline].age, &e[newline].bs);
        printf("%s %d %f\n", e[newline].name, e[newline].age, e[newline].bs);
        newline--;
        }
        fclose(fp);
    for(i=1; i<4;i++){
            printf("\n%s %d %f\n", e[i].name, e[i].age, e[i].bs);
    }
    }

