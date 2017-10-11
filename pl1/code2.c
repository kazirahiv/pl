#include<stdio.h>
int main(){
    int z[4][6];
    int n[24];
    int i, j, count, index;
    for(i=0; i<4; i++){
    for(j=0; j<6; j++){
        scanf("%d", &z[i][j]);
        printf("Number in array index[%d][%d]= %d \n",i,j, z[i][j]);
        }
    }
    for(i=0; i<4; i++){
    for(j=0; j<6; j++){
        if(60 > z[i][j]){
        n[index] = z[i][j];
        index++;
        count++;
        }
        }
        }
    for(i=0; i<count; i++){
        printf("New array index[%d]=%d \n", i, n[i]);
        }
    }
