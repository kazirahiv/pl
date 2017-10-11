#include<stdio.h>
int main(){
 int i;
 int arr[] = {10,20,30,40,50};
 for(i=0; i<5; i++){
  display(&arr[i]);
  }
}

void display(int *p){
    show(*p);
    }
void show(int *j){
    printf("%d", j);
    }
