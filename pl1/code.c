#include<stdio.h>
int main(){
    int arr[3][5];
    int br[15];
    int i, j, index=0, count;
    for(i=0; i<3; i++){
    for(j=0; j<5; j++){
    scanf("\n%d", &arr[i][j]);
    }
    }
    for(i=0; i<3; i++){
    for(j=0; j<3; j++){
    if(arr[i][j]<30){

        br[index] = arr[i][j];
        index++;
        count++;
        }
    }
    }
    for(i=0; i<count; i++){
    printf("\nNew %d", br[i]);
    }





    }
