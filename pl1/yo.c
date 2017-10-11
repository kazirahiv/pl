#include<stdio.h>
struct subject {
        int roll;
        int mark;
        };
struct subject math[10];
int main(){
    FILE *fptr;
    int i;
    fptr = fopen("math.txt", "r");
    for(i=1; i<10; i+2){
            fscanf(fptr, "%d", &math[i].roll);


    }
    fclose(fptr);

    for(i=0; i<10; i++){
            printf("roll %d mark %d \n", math[i].roll, math[i].mark);
        }

    }
