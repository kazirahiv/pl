#include<stdio.h>
int main(){
    FILE *fpoint;
    char data[25]= "Rahiv is awesome";
    int length = strlen(data);
    int counter;
    fpoint = fopen("abc.txt", "w");
    if(fpoint==NULL){
        printf("File not exist");
    }
    else {
        for(counter=0; counter<length; counter++){
                printf("Writing the char %c \n", data[counter]);
                fputc(data[counter], fpoint);
        }
        printf("Data written successfully");
    }
    }
