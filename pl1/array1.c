#include<stdio.h>
int main(){
int arr[2][3]={12,34,23,45,56,45};
int i;
for(i=0; i<2; i++){
printf("%d %d", arr[i][0]);
printf("%d %d", arr[i][1]);
printf("%d %d\n", arr[i][2]);
}

}
