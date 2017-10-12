 /*
 This code takes integer command line arguments in ascending order and rearranges them is descending order. 
 */
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){

    if(argc<=1){printf("Please give me arguments !");}

    int conv;
    int ar[argc+1];
    for(int i=1, j=0; i<argc; i++){
            conv = atoi(argv[i]);
            printf("Integer version = %d \n", conv );
            ar[j] = conv;
            j++;
            }
    sort(ar, argc);

    }

int sort(int ar[], int argc){
    int temp;
    for(int j=0; j<50; j++){
        for(int i=0; i<11; i++){
        if(ar[i]>ar[i+1]){
        temp = ar[i];
        ar[i]= ar[i+1];
        ar[i+1] = temp;
        }
    }
    }
    for(int i= 1; i<argc; i++){
        printf("Reversed Version %d \n", ar[i]);
    }
    }
