#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void gotoxy(short int col, short int row);
struct emp{
    char name[40];
    int age;
    float bs;
    };
struct emp e;
void gotoxy(short int col,short int row)
{
printf("%c[%d;%df",0x1B,row,col);
}
int main(){
    FILE *fp, *ft;
    char choice;
    int another;
    char empname[40];
    long int recsize;
    fp = fopen("EMP.DAT","rb+");
    if(fp==NULL){
        fp = fopen("EMP.DAT", "wb+");
        if(fp == NULL){
            puts("Cant open file");
            exit(1);
        }
        }
    recsize = sizeof(e);
    while(1){
        system("clear");
        gotoxy(30, 10);
        printf("1. Add records");
        gotoxy(30,12);
        printf("2. List records");
        gotoxy(30,14);
        printf("3. Modify records");
        gotoxy(30,16);
        printf("4. Delete records");
        gotoxy(30,18);
        printf("0.Exit\n");
        printf("your choice");
        fflush(stdin);
        scanf("%d", &choice);
        switch(choice){
            case 1:
                fseek(fp,0, SEEK_END);
                another = 1;
                while(another == 1){
                    printf("\nEnter name ag and basic salary");
                    scanf("%s %d %f", e.name, &e.age, &e.bs);
                    fwrite(&e, recsize, 1, fp);
                    printf("Add another record(1,0)");
                    fflush(stdin);
                    scanf("%d", &another);
                    } break ;
            case 2:
                rewind(fp);
                while(fread(&e, recsize,1, fp)==1)
                    printf("\n%s %d %f", e.name, e.age, e.bs);
                break;
            case 3:
                another = 1;
                while(another==1){
                        printf("Enter the name of employee to modify");
                        scanf("%s", empname);
                        rewind(fp);
                        while(fread(&e, recsize, 1, fp)==1){
                            if(strcmp(e.name, empname)== 0){
                                printf("Enter new name, age, bs");
                                scanf("%s %d %f", e.name, &e.age, &e.bs);
                                fseek(fp, -recsize, SEEK_CUR);
                                fwrite(&e, recsize, 1, fp);
                                break;
                            }
                        }
                        printf("\nModify another record?");
                        fflush(stdin);
                        scanf("%d", &another);
                } break;

            case 4:
                another = 1;
                while(another== 1){
                    printf("\nEnter name of the employee to delete");
                    scanf("%s", empname);
                    ft = fopen("TEMP.DAT", "wb");
                    rewind(fp);
                    while(fread(&e, recsize,1,fp)==1){
                        if(strcmp(e.name, empname)!=0)
                            fwrite(&e, recsize, 1, ft);

                    }
                    fclose(fp);
                    fclose(ft);
                    remove("EMP.DAT");
                    rename("TEMP.DAT", "EMP.DAT");
                    fp = fopen("EMP.DAT", "rb+");
                    printf("Delete another record");
                    fflush(stdin);
                    scanf("%d", &another);
                } break;
            case 0:
                fclose(fp);
                exit(0);

        }
        }
    }
