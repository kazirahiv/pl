#include<stdio.h>
int main(){
    int p[3][5];
    int n[24];
    int i, j, count, index;
    for(i=0; i<3; i++){
    for(j=0; j<5; j++){
        scanf("%d", &p[i][j]);
        printf("Number in array index[%d][%d]= %d \n",i,j, p[i][j]);
        }
    }
    for(i=0; i<3; i++){
    for(j=0; j<5; j++){
        if(30 > p[i][j]){
        n[index] = p[i][j];
        index++;
        count++;
        }
        }
        }
    for(i=0; i<count; i++){
        printf("New array index[%d]=%d \n", i, n[i]);
        }
    }

