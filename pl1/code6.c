#include<stdio.h>
struct Student{
    char name[25];
    char student_id[25];
    int age;
    };
struct Student s[5];
int main(){
    int i, ag=0, average;
    printf("Input student name, id , age\n");
    for(i=0; i<5; i++){
    scanf("%s %s %d", &s[i].name, &s[i].student_id, &s[i].age);
    }
    for(i=0; i<5; i++){
        ag = ag+s[i].age;
        }
    average = ag/5;
    printf("Average %d", average);

    }
