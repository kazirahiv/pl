#include<stdio.h>
int less(int arr[]);
int main(){
int arr[5];
int i, r;
for(i=0; i<4; i++)
{
scanf("%d", &arr[i]);
}
r = less(arr);
printf("%d", r);
}

int less(int arr[]){
int temp=0;
int index = arr[0];
int i;
for(i=1; i<4; i++){
if(index<arr[i]){
index = arr[i];
temp= arr[i];

}
}
return temp;

}
