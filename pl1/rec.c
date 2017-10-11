#include<stdio.h>

void print(int i) {
int    n =10;
    if(i>n) return;

    print(i+1);
    printf("%d ", i);

            }
int main(){
        print(1);
        }
