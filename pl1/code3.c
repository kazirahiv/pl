#include<stdio.h>
struct Worker{
    char name[25];
    int jy;
    int salary;
    };
struct Worker w[5];
int main(){
    int i, sal=0, average;
    printf("Input Workers name, jy , salary\n");
    for(i=0; i<5; i++){
    scanf("%s %d %d", &w[i].name, &w[i].jy, &w[i].salary);
    }
    for(i=0; i<5; i++){
        sal = sal+w[i].salary;
        }
    printf("Salary %d\n", sal);
    average = sal/5;
    printf("Average %d", average);

    }
